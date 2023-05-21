#include <stdio.h>

void printSpaces(int rows, int i){
    for(int j = 0; j < rows - i; j++){
        printf(" ");
    }
}

void printPascal(int rows){
    int pascal[rows][rows];

    for(int i = 0; i < rows; i++){
        printSpaces(rows, i);

        for(int j = 0; j <= i; j++){
            //memorize this formula, derived from binomial theorem
            j == 0 || j == i?(pascal[i][j] = 1):(pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j]); 
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int rows;
    scanf("%d", &rows);
    
    printPascal(rows);
    return 0;
}