#include <stdio.h>
int main(){
    
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = num1;

    if(num2 > max){
        max = num2;
    }
    if(num3 > max){
        max = num3;
    }
    
    printf("largest among %d %d and %d is %d", num1, num2, num3, max);
    return 0;
}