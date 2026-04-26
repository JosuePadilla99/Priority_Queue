#include "Priority_Queue_H.h"

using namespace std;

int main(){
    int caseNum{0};
    vector<int> userInput;

    while(true){
        int valueToAdd{0};
        cout << "Enter a positive number or enter '-1' to end: " << endl;
        cin >> valueToAdd;
        if(valueToAdd == -1){
            break;
        }
        userInput.push_back(valueToAdd);
    }
    int inputCapacity = userInput.size();
    printf("Welcome to the priority queue menu! Choose a numbered option below:\n"
            "1. Insert item in queue\n"
            "2. Delete min item from queue\n"
            "3. Print the queue as an array\n"
            "4. exit the program\n" );
    cin >> caseNum;
    switch(caseNum){
        case 1:{
            int insert{0};
            Priority_Queue inputObj(inputCapacity);
            inputObj.buildHeap(userInput); // build our initial heap
            cout << "Enter the value you want to insert in the queue: " << endl;
            cin >> insert;
            inputObj.insert(insert);
            inputObj.printQueue();
            break;
        }
        case 2:{
            Priority_Queue deleteObj(inputCapacity);
            deleteObj.buildHeap(userInput); // building the initial heap
            cout << "Items in heap before deletion are: ";
            deleteObj.printQueue();
            deleteObj.deleteMin(); // deleteMin utilized heapify function to maintain complete binary tree shape
            cout << endl;
            cout << "Items in heap after deletion are: ";
            deleteObj.printQueue();
            break;
        }
        case 3:{
            Priority_Queue printObj(inputCapacity);
            printObj.buildHeap(userInput); // need to build our heap in order to print items in queue
            printObj.printQueue(); 
            break;
        }
        default:
            cout << "Thank you for utilizing the priority queue tool! Have a good day!" << endl;
            
    }
}