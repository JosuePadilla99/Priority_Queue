#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include "Node_H.h"

class Priority_Queue{
private:
    Node* root_node;
    Node* right_node;
    Node* left_node;
public:
    Priority_Queue(){
        root_node = nullptr;
        right_node = nullptr;
        left_node = nullptr;
    }

    Node* getRootPtr() const;
    Node* getRightPtr() const;
    Node* getLeftPtr() const;

    bool isEmpty();
    void insert(int);
    int deleteMin();
};

#endif