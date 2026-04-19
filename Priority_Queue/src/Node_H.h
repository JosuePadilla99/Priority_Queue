#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node{
private:
    int value;
    Node* root;
    Node* left;
    Node* right;
public:
    Node(){
    }
    Node(int value){
        this->value = value;
        root = nullptr;
        left = nullptr;
        right = nullptr;
    }

    int getValue()const{return value;}
    Node* getRootPtr()const{return root;}
    Node* getLeftPtr()const{return left;}
    Node* getRightPtr()const{return right;}
    
    void setRootPtr(Node* settingRoot){root = settingRoot;}
    void setLeftPtr(Node* settingLeftPtr){left = settingLeftPtr;}
    void setRightPtr(Node* settingRightPtr){right = settingRightPtr;}

};

#endif