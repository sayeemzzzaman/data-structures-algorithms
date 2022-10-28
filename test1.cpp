#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct node{
    int data;
    node *next;

}node;


node *head , *temp1 , *temp2;


void LastInsertion(int a){

temp1 = head;
while(temp1 -> next != NULL){
   temp1 = temp1->next;
}
temp2 = (node*)malloc(sizeof(node));
temp2->data = a;
temp2->next = NULL;
temp1->next = temp2;
}

void printList(){
    node *t;
    t = head;
    while(t != NULL){
        printf("%d ", t->data);
        t = t->next;
    }
}

int main(){

    int a;

    while(a!=-1){
        if(head!=NULL){
        cout << "Enter the value you want to insert: " << endl;
        cin >> a;
        if(a!=-1)
        LastInsertion(a);
        //FirstInsertion(a);
        }
    
        else{
            head = (node*) malloc(sizeof(node));
            cout << "Enter the value you want to insert: " << endl;
            cin >> a;
            head->data = a;
            head->next = NULL;
        }
    }
    
    
    printList();
    

}