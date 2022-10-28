#include<iostream>

using namespace std;

void swap(int *array, int *array1){
    int temp = *array;
    *array = *array1;
    *array1 = temp;
}

int bubbleSort(int array[], int n){
    for(int i=0; i<n; i++){  //5 2 7 1 9
        for(int j=0; j<n-i-1; j++){ //5-0-1 = 4 ...j<4
            if(array[j]>array[j+1]){ //2 5 1 7 9-- 2 1 5 7 9 --- 1 2 5 7 9
                swap(&array[j],&array[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }

    bubbleSort(array,n);

    for(int p=0; p<n; p++){
        cout << array[p] << " ";
    }
}