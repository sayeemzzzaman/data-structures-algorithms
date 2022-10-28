#include<iostream>

using namespace std;

int insertionSort(int array[], int n){
    for(int j=1; j<n; j++){
        int temp = array[j];
        int i = j-1;
        while(i>=0 && array[i]>temp){ //ascending order
            array[i+1] = array[i];       //for descending order array[i]<temp
            i = i-1;
        }
        array[i+1] = temp;
    }
}
int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }

    insertionSort(array,n);

    for(int p=0; p<n; p++){
        cout << array[p] << " ";
    }
}