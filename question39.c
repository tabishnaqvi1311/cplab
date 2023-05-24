#include <stdio.h>

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            printf("Element found at index: ");
            return i;
        }
    }
    printf("Element not in array");
    return -10;
}

int main(){
    
    int arr[5] = {1, 4, 2, 6, 3};

    int elementToBeSearched;
    scanf("%d", &elementToBeSearched);

    printf("%d", linearSearch(arr, 5, elementToBeSearched));

    return 0;
}