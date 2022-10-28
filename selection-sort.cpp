#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int min = 99999;
        int minIndex;
        for(int j=i; j<n; j++){
            if(min>arr[j]){
                min = arr[j];
                minIndex = j;
            }
        }
        
        int temp;
        temp = arr[i];
        arr[i] = min;
        arr[minIndex] = temp;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}