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
        new_node->set_next(this->head);
        this->head = new_node;
    }

    Node<T> *get_head() {
        return this->head;
    }


private:
    Node<T> *head;
};


#endif //STUDENTS_CONTROL_LIST_H
