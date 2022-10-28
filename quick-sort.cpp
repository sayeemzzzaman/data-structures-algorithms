#include<iostream>
using namespace std;

void swap(int arr[], int i, int r){
    int temp = arr[i];
    arr[i] = arr[r];
    arr[r] = temp;
}
int partition(int arr[], int l, int r){
    int pivot = arr[r]; //selecting last element as pivot
    int i = l-1;

    for(int j=l; j<r; j++){
        if(arr[j]<pivot){ //
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quickSort(int arr[], int l, int r){
    if(l<r){

        int pivot = partition(arr,l,r); //pivot gets the right index
        quickSort(arr,l,pivot-1); //now sorting without pivot
        quickSort(arr,pivot+1,r);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}