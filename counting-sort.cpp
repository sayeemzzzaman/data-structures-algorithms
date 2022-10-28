#include <iostream>

using namespace std;


int countingSort(int array[], int n){
    int max = array[0];
    for(int i=0; i<n;i++){
        if(max < array[i])max = array[i];
    }
    int k = max;
    int c[k+1]={0}; //a[0 3 2 2 1] n=5 k=3 c[1 1 2 1] b[0 1 2 2 3]
    for(int i=0; i<n; i++){
        c[array[i]]++;
    }
    for(int i=1; i<=k; i++){
        c[i] = c[i]+c[i-1]; // c[1 2 4 5]
    }
    int b[n];
    //  0 1 2 3 4         0 1 2 3
    //a[0 3 2 2 1]  b[] c[1 2 4 5]   c is the position array
    for(int i = n-1; i>=0 ; i--){ //4 3 2 1 0
        b[--c[array[i]]] = array[i];
        //cout << " a[i]: " << c[array[i]];
    }
    //cout << "max: " << k << endl;
    cout << "Sorted:";
    for(int j=0; j<n; j++){
        cout << " " << b[j];
    }

    cout << endl;
  
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    countingSort(a,n);
    

 

}