#include <stdio.h>
int main(){
    
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("LOWER TRIANGLE: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j <= i ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("UPPER TRIANGLE: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j <= 3 - i - 1 ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}