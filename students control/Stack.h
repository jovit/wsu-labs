#ifndef STUDENTS_CONTROL_STACK_H
#define STUDENTS_CONTROL_STACK_H

#include <string>
#include <vector>

class Stack {
public:
    void push(std::string d);
    bool isEmpty();
    std::string pop();
    std::string peek();

private:
    std::vector<std::string> data;
};

#endif //STUDENTS_CONTROL_STACK_H
