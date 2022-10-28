#include<iostream>
using namespace std;

int arr[100], top=-1, cap;

void push(int n){
    if(top+1 == cap)cout << "Stack Overflow" << endl;
    else arr[++top] = n;
}

void pop(){
    if(top==-1)cout << "Stack Underflow" << endl;
    else{
        arr[top--] = -1;
        //top--;
    }
}

void printStack(){
    if(top==-1)cout << "Empty Stack" << endl;
    for(int i=0; i<=top; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    cout << "Enter the capacity: ";
    cin >> cap;

    while(true){
        cout << "Enter your choice: " << endl << "1 to push" << endl << "2 to pop" << endl << "3 to print" << endl << "0 to exit" << endl;

        int choice;
        cin >> choice;
        if(choice==1){
            cout << "Enter the value you want to push: ";
            int pushValue;
            cin >> pushValue;
            push(pushValue);
        }
        else if(choice==2)pop();
        else if(choice==3)printStack();
        else if(choice==0)break;

    }
    
    
}