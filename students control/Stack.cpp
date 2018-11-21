#include <string>
#include "Stack.h"

void Stack::push(std::string d) {
    this->data.insert(this->data.begin(), d);
}

bool Stack::isEmpty() {
    return this->data.empty();
}

std::string Stack::peek() {
    return this->data.front();
}

std::string Stack::pop() {
    std::string result = this->data.front();
    this->data.erase(this->data.begin());
    return result;
}