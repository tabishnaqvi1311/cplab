#include <stdio.h>

void insertionSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        int fixed = arr[i], j;
        for(j = i - 1; j >= 0; j--){
            if(arr[j] > fixed){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = fixed;
    }

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[5] = {34, 23, 54, 22, 7};
    insertionSort(arr, 5);
    return 0;
}