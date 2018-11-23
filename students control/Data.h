#ifndef STUDENTS_CONTROL_DATA_H
#define STUDENTS_CONTROL_DATA_H

#include <string>

#include "Stack.h"

class Data {
public:
    explicit Data(std::string line);

    //getters
    std::string get_name() { return this->name; }

    int get_record_number() { return this->record_number; }

    int get_id() { return this->id; }

    std::string get_email() { return this->email; }

    int get_units() { return this->units; }

    std::string get_program() { return this->program; }

    std::string get_level() { return this->level; }

    int get_number_of_absences() { return this->number_of_absences; }

    Stack get_stack() { return this->stack; }

    std::string get_most_recent_absence() { return (this->number_of_absences > 0 ? this->stack.peek() : "none"); }

    //setters
    void set_number_of_absences(int na) { this->number_of_absences = na; }

    //methods
    void add_to_stack(std::string time) { this->stack.push(time); }

    void add_absence();

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
