#include<iostream>
#include<stdlib.h>
using namespace std;

struct list{
    int data;
    struct list *next;
};

typedef struct list node;
node *head, *temp, *temp1, *previous;

void push(int n){

    previous = head;
    while(previous->next != NULL){
        previous = previous->next;
    }

    temp = (node*)malloc(sizeof(node));
    temp->data = n;
    temp->next = NULL;
    previous->next = temp;
}

void printList(){
    node *t;
    t = head;
    while(t != NULL){
        cout << t->data << " ";
        t = t->next;
    }
}


void pop(){
    temp1 = head;
    temp = head ->next;
    while(temp->next != NULL){
        temp = temp -> next;
        temp1 = temp1 -> next;
    }
    free(temp);
    temp1 -> next = NULL;
}

int main(){

    int a,k,choice;

    while(a!=-1){
        cout << "Enter 1 to Insert or Enter 2 to Delete" << endl;
        cin >> choice;
        if(head!=NULL){
            if(choice == 1){
                cout << "Enter the value you want to insert: " << endl;
                cin >> a;
                // cout << "Enter the position where you want to insert: " << endl;
                // cin >> k;
                if(a!=-1){
                    push(a);
                    //FirstInsertion(a);
                    // if(k==1){
                    //     FirstInsertion(a);
                    // }else
                    // MiddleInsertion(a,k);
                    printList();
                    cout << endl;
                }
            }
            else if(choice == 2){
                //firstDeletion();
                //int n;
                //cout << "Enter the delete position: ";
                //cin >> n;
                //if(n==1)firstDeletion();
                //else
                //middleDeletion(n);
                pop();
                printList();
                cout << endl;
            }
        }
        else{
            head = (node*) malloc(sizeof(node));
            cout << "Enter the head value you want to insert: " << endl;
            cin >> a;
            head->data = a;
            head->next = NULL;
            printList();
            cout << endl;
        }
    }
    
    
    printList();
    

}