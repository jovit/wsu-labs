#ifndef FITBIT_SLEEP_H
#define FITBIT_SLEEP_H

typedef enum sleep {
    NONE = 0,
    ASLEEP = 1,
    AWAKE = 2,
    REALLYAWAKE = 3
} Sleep;

Sleep itosleep(int i);

#endif //FITBIT_SLEEP_H
