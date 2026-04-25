#include "Priority_Queue_H.h"

using namespace std;

void Priority_Queue::heapify(int& child){
    /*This function will be used to maintain the order in our queue.
    We compare the root, right, and left node values and find the smallest of the three for the entire queue until we 
    correctly sorted the queue*/

    int leftChild = left(child);
    int rightChild = right(child);
    int smallestValue = child;

    if((leftChild < queue.size()) && (queue[leftChild] < queue[smallestValue])){
        smallestValue = leftChild; // setting smallest value in tree to the left child if the queue value 
        // left child is smaller than the queue value of the param child
    }
    if((rightChild < queue.size()) && (queue[rightChild] < queue[smallestValue])){
        smallestValue = rightChild; // setting smallest value in tree to the right child if the queue value 
        // right child is smaller than the queue value of the param child
    }
    
    // if the smallest value in the queue is not equal to the child param, we will swap the two values since that means that 
    // we have not found the smallest value in the queue. We will recursively call the heapify function until we find the smallest value in the queue
    if(smallestValue != child){
        swap(queue[child], queue[smallestValue]);
        heapify(smallestValue);
    }
}


void Priority_Queue::insert(int& value){
    /*The insert function will a min heap data structure where our root node is the smallest value in our tree*/
    if(isEmpty){
        queue[0] == queue[value];
        return;
    }
    
    if(queue.size() == capacity){
        cout << "Min heap is full creating more space to add element!" << endl;
        queue.resize(queue.size() * 2 + 1); // resizing our queue to create a left child hole to maintain complete tree structure
    }
    // increase the size of the array and then adding the new value to the end of the array
    capacity++;
    int i = capacity - 1; // setting i to the end index of the array
    queue[i] = value;

    // while the parent node is greater than queue[i] or the value we have entered, we will swap the places. We then set i to equal the parent node
    // to ensure we have an accurate placeholder for our parent node value
    while(i != 0 && queue[parent(i)] > queue[i]){
        swap(queue[i], queue[parent(i)]);
        i = parent(i);
    }

}

int Priority_Queue::deleteMin(){
    /*Since we are using a min heap data structure, our min value will be at the root
    Key Functionality: We place the last element in the queue as our temp place holder because one, it likely isn't the smallest 
    value in our queue to start. This will allows to us maintain the shape our tree to keep it a complete binary tree. If we moved the left most 
    node, we would have a missing element in left subtree and this would not keep a complete binary tree shape*/

    int heapifyArg = 0;
    if(isEmpty){
        return -1;
    }
    // check if we only have one element in the queue
    else if(queue.size() == 1){
        capacity--;
        return queue[0]; // returning the one and only element in our queue
    }
    // Continue with a regular deleltion method
    else{
        // store our root node
        int root = queue[0];
        queue[0] = queue[capacity - 1]; // setting our root node to the last node. This acts a placeholder.
        capacity--;
        heapify(heapifyArg); // We start with 0 to gaurantee our heapfiy function will run once. This param will continue to get updated due to the
        // conditional checks in the heapify function
    }

}

void Priority_Queue::printQueue(int queueSize){
    if(queueSize == queue.size()){
        cout <<  ", " << queue[capacity - 1];
    }
    cout << ", " << queue[queueSize];
    return printQueue(queueSize++);
}

bool Priority_Queue::isEmpty(){
    if(queue.size() == 0){
        cout << "Queue is empty!" << endl;
        return true;
    }
}