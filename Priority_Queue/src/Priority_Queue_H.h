#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include<vector>
#include<algorithm>
#include<iostream>

class Priority_Queue{
private:
    // max size of the queue
    int capacity; 
    // queue array
    vector<int> queue;
    // returns the parent node
    int parent(int i){return (i - 1)/2;}
    // returning the left child node
    int left(int i){return 2 * 1 + 1;}
    // returning the right child node
    int right(int i){return 2 * i + 2;}
public:
    Priority_Queue(int size){
        this->capacity = size;
    }
    bool isEmpty();
    void heapify(int&);
    void insert(int&);
    int deleteMin();
    void printQueue(int);
};

#endif