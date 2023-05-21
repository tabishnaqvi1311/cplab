#include <stdio.h>
int main(){
    
    int rows;
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++){
        //for spaces
        for(int j = 0; j < rows-i; j++){
            printf(" ");
        }
        //for pattern in odd
        for(int k = 0; k < 2*i + 1; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}