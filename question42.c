#include <stdio.h>

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            //swapping j and j+1
            int temp;
            if(arr[j] > arr[j+1]){ 
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    
    int arr[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    printf("Sorting by bubble sort...\n");

    bubbleSort(arr, 5);

    return 0;
}