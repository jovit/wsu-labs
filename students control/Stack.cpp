#include <string>
#include "Stack.h"

void Stack::push(std::string d) {
    this->data.insert(this->data.begin(), d); // add to start of vector
}

bool Stack::isEmpty() {
    return this->data.empty();
}

std::string Stack::peek() {
    return this->data.front(); // return the first element of vector
}

std::string Stack::pop() {
    std::string result = this->data.front(); // return the first element of the vector
    this->data.erase(this->data.begin()); // remove the first element of the vector
    return result;
}