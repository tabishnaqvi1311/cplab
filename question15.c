#include <stdio.h>
int main(){
    
    int rows;
    scanf("%d", &rows);

    int num = 1;
    for(int i = 0;i<rows; i++){
        for(int j = 0; j < rows - i; j++){
            printf(" ");
        }
        for(int k = 0; k < 2*i + 1; k++){
            k<=i?(printf("%d", num+k)):(printf("%d", num + i - (k-i)));
        }
        num = i + 2;
        printf("\n");
    }

    return 0;
}