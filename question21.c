#include <stdio.h>
int main(){
    
    int myArr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int secondArr[3][3] = {2, 4, 6, 8, 10, 12, 14, 16, 18};

    int sumArr[3][3] = {0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sumArr[i][j] = myArr[i][j] + secondArr[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", sumArr[i][j]);
        }
        printf("\n");
    }
        
    return 0;
}