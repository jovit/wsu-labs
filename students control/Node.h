#ifndef STUDENTS_CONTROL_NODE_H
#define STUDENTS_CONTROL_NODE_H

#include <clocale>

template<class T>
class Node {
    T data;
    Node *next;
public:
    explicit Node(T data): data(data){
        this->next = nullptr;
    }
    void set_next(Node *next) { this->next = next; }
    Node *get_next() { return this->next; }
    void set_data(T data) { this->data = data; }
    T get_data() {return this->data; }
};


#endif //STUDENTS_CONTROL_NODE_H
