#include<iostream>
#include<cmath>
using namespace std;

void Merge(int arr[], int l, int m, int h){
    int i=l;
    int j=m+1;
    int k=l;
    int b[sizeof(arr)/sizeof(arr[0])];
    while(i<=m && j<=h){
        if(arr[i]>arr[j]){
            b[k] = arr[j];
            j++;
            k++;
        }
        else{
            b[k] = arr[i];
            i++;
            k++;
        }
    }
}

void Msort(int arr[], int l, int h){
    if(h>l){
        int m = floor((l+h)/2);
        Msort(arr,l,m);
        Msort(arr,m+1,h);
        Merge(arr,l,m,h);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    Msort(arr,1,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}