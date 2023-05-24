#include <stdio.h>

int binarySearchRecursive(int arr[], int s, int e, int target){
    if(e >=1 ){

        int mid = s + (e-s)/2;

        if(arr[mid] == target){
            printf("Element found at %d", mid);
            return mid;
        }

        if(arr[mid] > target){
            return binarySearchRecursive(arr, s, mid - 1, target);
        }

        return binarySearchRecursive(arr, mid+1, e, target);
    }
    printf("Element not found");
    return -1;
}


int main(){
    
    int arr[6] = {32, 43, 54, 65, 77, 80};

    int target;
    scanf("%d", &target);

    binarySearchRecursive(arr, 0, 5, target);

    return 0;
}