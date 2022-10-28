#include<iostream>
using namespace std;
struct list{
    int data;
    struct list *next;
};

typedef struct list node;
node *h[100],*temp,*temp1;

void printList(int n){
    node *t;

    for(int i=1; i<=n; i++){
        t = h[i];
        cout << i << " -> ";
        t = t->next;
        while(t != NULL){
            cout << t->data << ",";
            t = t->next;
        }
        cout << endl;
    }
    
}
/*  a b c d
  a 0 1 1 1
  b 1 0 0 1
  c 1 0 0 1
  d 1 1 1 0
*/

// inputs 0 1 1 1 1 0 0 1 1 0 0 1 1 1 1 0
int main(){

    cout << "How many vertices? " << endl;
    int n;
    cin >> n;
    
    
    for(int i=1;i<=n;i++){
        h[i] = (node*)malloc(sizeof(node));
        h[i] ->data = i;
        h[i] -> next = NULL;
    }

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            cout << i << " has any connection with " << j <<" ?"<< endl;
            int inp;
            cin >> inp;
            if(inp==1 && h[i]->data==i){
                temp = (node*)malloc(sizeof(node));
                temp ->data = j;
                temp->next = NULL;
                //cout << j << endl;
                temp1 = h[i];
                while(temp1->next != NULL){
                    temp1 = temp1->next;
                }
                temp1 -> next = temp;
            }
        }
    }

    printList(n);

}