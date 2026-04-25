#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class Priority_Queue{
private:
    // current size of the array
    int size;
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
    Priority_Queue(){
        
    }
    Priority_Queue(int capacity){
        this->size = 0;
        this->capacity = capacity;
        this->queue.resize(capacity);
    }
    bool isEmpty();
    void buildHeap(vector<int>&);
    void heapify(int&);
    void insert(int&);
    int deleteMin();
    void printQueue(int);
};

#endif