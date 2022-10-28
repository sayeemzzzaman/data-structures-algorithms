#include<iostream>
#include<stdlib.h>
using namespace std;

struct list{
    int data;
    struct list *next;
};

typedef struct list node;
node *head, *temp, *temp1, *previous;

void FirstInsertion(int n){
    temp = (node*)malloc(sizeof(node));
    temp->data = n;
    temp->next = head;
    head = temp;
}

void LastInsertion(int n){

    previous = head;
    while(previous->next != NULL){
        previous = previous->next;
    }

    temp = (node*)malloc(sizeof(node));
    temp->data = n;
    temp->next = NULL;
    previous->next = temp;
}

void MiddleInsertion(int a, int k){
    int count=0;

    temp = head;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    if(k<=count){
        temp = head;
        for(int i=1; i<k-1; i++){
            temp = temp->next;
        }
        temp1 = (node*)malloc(sizeof(node));
        temp1 ->data = a;
        temp1 ->next = temp->next;
        temp -> next = temp1;
    }
    else {
        cout << "Invalid Position" << endl;
    }
    
}

void printList(){
    node *t;
    t = head;
    while(t != NULL){
        cout << t->data << " ";
        t = t->next;
    }
}

void firstDeletion(){
    temp = head;
    head = head -> next;
    free(temp);
}

void middleDeletion(int n){
    temp = head;
    for(int i=1; i<n-1; i++){
        temp = temp->next;
    }
    temp1 = temp->next;
    temp->next = temp->next->next;
    free(temp1);
}

void lastDeletion(){
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
                    //LastInsertion(a);
                    FirstInsertion(a);
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
                lastDeletion();
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