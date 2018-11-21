#ifndef STUDENTS_CONTROL_LIST_H
#define STUDENTS_CONTROL_LIST_H

#include "Node.h"

template<class T>
class List {
public:
    List() {
        this->head = NULL;
    }

    void insert(T value) {
        auto *new_node = new Node<T>(value);
        new_node->set_next(new_node);
        this->head = new_node;
    }


private:
    Node<T> *head;
};


#endif //STUDENTS_CONTROL_LIST_H
