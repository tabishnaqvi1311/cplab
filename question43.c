#include <stdio.h>

void selectionSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int fixed = i, temp;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[fixed]){
                fixed = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[fixed];
        arr[fixed] = temp;
    }

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    
    int arr[5] = {43, 34, 12, 65, 7};

    selectionSort(arr, 5);

    return 0;
}