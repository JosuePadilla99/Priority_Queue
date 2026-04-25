#include "Priority_Queue_H.h"

using namespace std;

int main(){
    int caseNum{0};
    Priority_Queue utilobj;
    vector<int> userInput;

    while(true){
        int valueToAdd{0};
        cout << "Enter the value you want to insert in the queue or enter '-1' to end: " << endl;
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
            Priority_Queue inputObj(inputCapacity);
            inputObj.buildHeap(userInput);
            for(int i{0}; i < inputCapacity; i++){
                inputObj.insert(userInput[i]);
            }
            inputObj.printQueue(0);
            break;
        }
        case 2:{
            Priority_Queue deleteObj(inputCapacity);
            deleteObj.deleteMin();
            break;
        }
        case 3:{
            utilobj.printQueue(0); // using zero as our starint argument since the param will be recursively updated in the printQueue function
            break;
        }
        default:
            cout << "Thank you for utilizing the priority queue tool! Have a good day!" << endl;
            
    }
}