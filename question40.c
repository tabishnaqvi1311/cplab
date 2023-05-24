#include <stdio.h>

int binarySearch(int arr[], int size, int target){
    int s = 0, e = size - 1;

    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            printf("Element found at: ");
            return mid;
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    printf("Element not fouund");
    return -7;
}

int main(){
    int arr[7] = {12, 22, 23, 43, 59, 60, 71};
    int elementToBeSearched;
    scanf("%d", &elementToBeSearched);

    printf("%d", binarySearch(arr, 7, elementToBeSearched));

    return 0;
}