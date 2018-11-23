#ifndef STUDENTS_CONTROL_LIST_H
#define STUDENTS_CONTROL_LIST_H

#include "Node.h"

template<class T>
class List {
public:
    List() {
        this->head = nullptr; // initialize the head with null
    }

    ~List() {
        this->clear(); // delete all nodes
    }

    void insert(T value) {
        // create new node and insert it into the head of the list
        auto *new_node = new Node<T>(value);
        new_node->set_next(this->head);
        this->head = new_node;
    }

    void clear() {
        // free all nodes from the list
        Node<T> *current = this->head;
        Node<T> *to_remove = nullptr;
        while (current != nullptr) {
            to_remove = current;
            current = current->get_next();
            delete(to_remove);
        }

        this->head = nullptr;
    }

    Node<T> *get_head() {
        return this->head;
    }


private:
    Node<T> *head;
};


#endif //STUDENTS_CONTROL_LIST_H
