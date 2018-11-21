#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "fitbitdata.h"

FitbitData parse_line_to_fitbit(char *line) {
    FitbitData result;
    char *tok;
    char *ptr;
    int current_field = 0;

    for (tok = strsep(&line, ","); tok != NULL && current_field < 8; tok = strsep(&line, "\n,")) {
        char valid = strcmp(tok, "") != 0;

        switch (current_field) {
            case 0:
                strcpy(result.patient, tok);
                break;
            case 1:
                strcpy(result.minute, tok);
                break;
            case 2:
                result.calories = valid ? strtod(tok, &ptr) : 0;
                break;
            case 3:
                result.distance = valid ? strtod(tok, &ptr) : 0;
                break;
            case 4:
                result.floors = valid ? (unsigned) atoi(tok) : 0;
                break;
            case 5:
                result.heartRate = valid ? (unsigned) atoi(tok) : 0;
                break;
            case 6:
                result.steps = valid ? (unsigned) atoi(tok) : 0;
                break;
            case 7:
                result.sleepLevel = valid ? (unsigned) atoi(tok) : 0;
                break;
        }

        current_field++;
    }

    return result;
}

double calculate_max_calories(FitbitData data[], int size) {
    int i;
    double result = 0;
    for (i = 0; i < size; i++) {
        result += data[i].calories;
    }

    return result;
}

double calculate_distance_walked(FitbitData data[], int size) {
    int i;
    double result = 0;
    for (i = 0; i < size; i++) {
        result += data[i].distance;
    }

    return result;
}

unsigned int calculate_floors_walked(FitbitData data[], int size) {
    int i;
    unsigned int result = 0;
    for (i = 0; i < size; i++) {
        result += data[i].floors;
    }

    return result;
}

unsigned int calculate_steps_taken(FitbitData data[], int size) {
    int i;
    unsigned int result = 0;
    for (i = 0; i < size; i++) {
        result += data[i].steps;
    }

    return result;
}

double calculate_average_heart_rate(FitbitData data[], int size) {
    int i;
    double result = 0;
    for (i = 0; i < size; i++) {
        result += data[i].heartRate;
    }

    result = result / size;

    return result;
}

unsigned int calculate_max_steps_minute(FitbitData data[], int size) {
    int i;
    unsigned int max_steps = 0, current_steps = 0;
    char *previous_minute = "", *max_minute = "";

    for (i = 0; i < size; i++) {
        current_steps += data[i].steps;

        if (strcmp(previous_minute, data[i].minute) != 0) {
            if (current_steps >= max_steps) {
                max_steps = current_steps;
                max_minute = previous_minute;
            }
            current_steps = 0;
        }
        previous_minute = data[i].minute;
    }

    return max_steps;
}


char equal(FitbitData a, FitbitData b) {
    return (strcmp(a.minute, b.minute) == 0) && (strcmp(a.patient, b.patient) == 0) && a.steps == b.steps &&
           a.heartRate == b.heartRate && a.floors == b.floors && a.distance == b.distance &&
           a.calories == b.calories && a.sleepLevel == b.sleepLevel;
}

PoorSleepReport calculate_worst_sleep(FitbitData data[], int size) {
    int i;
    PoorSleepReport end;
    char in_range = 0;
    char current_start[9], current_end[9];
    int current_range = 0, biggest_range = 0;

    for (i = 0; i < size; i++) {
        if (data[i].sleepLevel > 0) {
            if (!in_range) {
                strcpy(current_start, data[i].minute);
                in_range = 1;
            }
            current_range += data[i].sleepLevel;
        } else {
            if (in_range) {
                in_range = 0;
                strcpy(current_end, data[i - 1].minute);
                if (current_range > biggest_range) {
                    biggest_range = current_range;
                    strcpy(end.starting, current_start);
                    strcpy(end.ending, current_end);
                }
                current_range = 0;
            }
        }
    }

    if (in_range) {
        strcpy(current_end, data[size-1].minute);
        if (current_range > biggest_range) {
            current_range = biggest_range;
            strcpy(end.starting, current_start);
            strcpy(end.ending, current_end);
        }
    }

    return end;
}