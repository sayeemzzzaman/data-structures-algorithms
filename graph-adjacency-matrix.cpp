#include<iostream>
using namespace std;

void createGraph(int v){
    int graph[100][100];
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            cout << i << " has any connection with " << j << " ?"<< endl;
            cin >> graph[i][j];
        }
    }//0 1 1 0 1 0 0 0 1 0 0 1 0 0 1 0
    // for(int i=1;i<=v;i++){
    //     for(int j=1;j<=v;j++){
    //         cout << i << " -> " << j << " = "<< graph[i][j] << " " << endl;
    //     }
    // }
    for(int i=1;i<=v;i++){
        cout << i << " -> ";
        for(int j=1;j<=v;j++){
            if(graph[i][j]!=0)
            cout << j << ",";
        }cout << endl;
    }
}
int main(){
    int v;
    cout << "Enter the number of vertices: ";
    cin >> v;
    createGraph(v);

}