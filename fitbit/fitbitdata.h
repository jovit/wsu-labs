#ifndef FITBIT_FITBITDATA_H
#define FITBIT_FITBITDATA_H

#include "sleep.h"

typedef struct fitbit {
    char patient[10];
    char minute[9];
    double calories;
    double distance;
    unsigned int floors;
    unsigned int heartRate;
    unsigned int steps;
    Sleep sleepLevel;
} FitbitData;

typedef struct poorsleepreport {
    char starting[9];
    char ending[9];
} PoorSleepReport;

FitbitData parse_line_to_fitbit(char *line);

char equal(FitbitData a, FitbitData b);

double calculate_max_calories(FitbitData data[], int size);

double calculate_distance_walked(FitbitData data[], int size);

unsigned int calculate_floors_walked(FitbitData data[], int size);

unsigned int calculate_steps_taken(FitbitData data[], int size);

double calculate_average_heart_rate(FitbitData data[], int size);

unsigned int calculate_max_steps_minute(FitbitData data[], int size);

PoorSleepReport calculate_worst_sleep(FitbitData data[], int size);

#endif //FITBIT_FITBITDATA_H
