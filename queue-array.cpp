#include<iostream>
using namespace std;

int arr[100], top=-1, cap;

void enqueue(int n){
    if(top+1 == cap)cout << "Queue Overflow" << endl;
    else arr[++top] = n;
}

void dequeue(){
    if(top==-1)cout << "Queue Underflow" << endl;
    else{
        arr[0] = -1;
        for(int i=0; i<top; i++){
            arr[i] = arr[i+1];
        }
        top--;
    }
}

void printQueue(){
    if(top==-1)cout << "Empty Queue" << endl;
    for(int i=0; i<=top; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    cout << "Enter the capacity: ";
    cin >> cap;

    while(true){
        cout << "Enter your choice: " << endl << "1 to enqueue" << endl << "2 to dequeue" << endl << "3 to print" << endl << "0 to exit" << endl;

        int choice;
        cin >> choice;
        if(choice==1){
            cout << "Enter the value you want to enqueue: ";
            int enqueueValue;
            cin >> enqueueValue;
            enqueue(enqueueValue);
        }
        else if(choice==2)dequeue();
        else if(choice==3)printQueue();
        else if(choice==0)break;

    }
    
    
}