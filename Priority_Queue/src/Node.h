#ifndef NODE
#define NODE
#include <iostream>

class Node{
private:
    int value;
    Node* root_ptr;
    Node* left_ptr;
    Node* right_ptr;
public:
    Node(){
    }
    Node(int value){
        this->value = value;
        root_ptr = nullptr;
        left_ptr = nullptr;
        right_ptr = nullptr;
    }

    int getValue()const{return value;}
    Node* getRootPtr()const{return root_ptr;}
    Node* getLeftPtr()const{return left_ptr;}
    Node* getRightPtr()const{return right_ptr;}
    
    void setRootPtr(Node* settingRoot){root_ptr = settingRoot;}
    void setLeftPtr(Node* settingLeftPtr){left_ptr = settingLeftPtr;}
    void setRightPtr(Node* settingRightPtr){right_ptr = settingRightPtr;}

};

#endif