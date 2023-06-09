#include <stdio.h>
int main(){
    
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[3][3] = {2, 4, 6, 8, 10, 12, 14, 16, 18};

    int result[3][3] = {0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}