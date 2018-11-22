#ifndef STUDENTS_CONTROL_DATA_H
#define STUDENTS_CONTROL_DATA_H

#include <string>

#include "Stack.h"

class Data {
public:
    explicit Data(std::string line);

    std::string get_name() { return this->name; }

private:
    int record_number;
    int id;
    std::string name;
    std::string email;
    int units;
    std::string program;
    std::string level;
    int number_of_absences;
    Stack stack;
};


#endif //STUDENTS_CONTROL_DATA_H
