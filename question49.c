#include <stdio.h>

void swapThem(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("Values before swapping: %d, %d\n", num1, num2);
    swapThem(&num1, &num2);
    printf("Values after swapping: %d, %d", num1, num2);

    return 0;
}