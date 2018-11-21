#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "fitbitdata.h"

int main(void) {
    FitbitData data[1440];
    FILE *fp;
    size_t len;
    char *line;
    int current_line = 0, i;
    int data_index = 0;
    char target[10];
    char *tok;
    double max_calories, distance_walked, average_heart_rate;
    unsigned int floors_walked, steps_taken, max_steps;
    PoorSleepReport sleep_report;

    fp = fopen("FitbitData.csv", "r");
    assert(fp != NULL);

    while (getline(&line, &len, fp) != -1) {
        if (current_line == 0) {
            for (tok = strtok(line, ","); tok && *tok; tok = strtok(NULL, "\n,\r")) {
                if (strcmp(tok, "") != 0) {
                    strcpy(target, tok);
                }
            }
        } else if (current_line > 1) {
            FitbitData line_data = parse_line_to_fitbit(line);
            if (strcmp(line_data.patient, target) == 0) {
                if (data_index > 0) {
                    if (!equal(line_data, data[data_index - 1])) {
                        data[data_index] = line_data;
                        data_index++;
                    }
                } else {
                    data[data_index] = line_data;
                    data_index++;
                }
            }
        }

        current_line++;

    }
    fclose(fp);

    max_calories = calculate_max_calories(data, data_index);
    distance_walked = calculate_distance_walked(data, data_index);
    floors_walked = calculate_floors_walked(data, data_index);
    steps_taken = calculate_steps_taken(data, data_index);
    average_heart_rate = calculate_average_heart_rate(data, data_index);
    max_steps = calculate_max_steps_minute(data, data_index);
    sleep_report = calculate_worst_sleep(data, data_index);

    fp = fopen("Results.csv", "w");
    assert(fp != NULL);

    fprintf(fp, "Total Calories,Total Distance,Total Floors,Total Steps,Avg Heartrate,Max Steps,Sleep\n");
    fprintf(fp, "%f,%f,%d,%d,%f,%d,%s:%s\n", max_calories, distance_walked, floors_walked, steps_taken,
            average_heart_rate, max_steps, sleep_report.starting, sleep_report.ending);

    for (i=0; i<data_index; i++) {
        FitbitData c = data[i];
        fprintf(fp, "%s,%s,%f,%f,%d,%d,%d,%d\n", c.patient, c.minute, c.calories, c.distance, c.floors, c.heartRate, c.steps, c.sleepLevel);
    }

    fclose(fp);

    return 0;
}