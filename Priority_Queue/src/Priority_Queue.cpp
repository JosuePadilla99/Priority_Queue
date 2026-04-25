#include <iostream>
#include "Priority_Queue_H.h"

using namespace std;

Node* Priority_Queue::getRootPtr() const{
    return root_node;
}

Node* Priority_Queue::getLeftPtr() const {
    return left_node;
}

Node* Priority_Queue::getRightPtr() const{
    return right_node;
}


void Priority_Queue::insert(int value){
   /*The insert function will a min heap data structure where our root node is the smallest value in our tree*/
   // create an extra space at the end of the binary tree
   //Check if the value is greater than the root node
   //If the value is greater than, then we will compare it to the next left node until our value is less than that node
   //Once our value is less than the node, we will then need to check the right child node and move that right child node to the empty space we created
   //We then will then need to move the parent node to where the right child node was
   //We then will move the value into the place of the parent node

}

int Priority_Queue::deleteMin(){
    /*Since we are using a min heap data structure, our min value will be at the root*/
    //Will need a current variable that gets updated with the value of the current node we are on
    //We may need a previous pointer as well
    //We want to create a variable to store the value of the root pointer
    //Set the root_node pointer to a nullptr
    //Compare the values of the left subtree parent node and the right subtree parent node. 
    //HINT: We will need to traverse the left side of the tree. The next left parent or the next right parent should always be the successor since this is a min heap data structure
    //We then will move the lesser of the two values to the root node: Might need variable to store this value. 
    //We will then need to compare the values of the child nodes of the lesser subtree
    //Move the lesser of the child nodes to the old subtree parent node
    //We will need to continue this process until all subtree parent nodes have child nodes that are bigger than them
}