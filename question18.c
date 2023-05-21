#include <stdio.h>
int main(){
    //swapping using third var
    int num1, num2, temp;
    scanf("%d %d", &num1, &num2);

    temp = num2;
    num2 = num1;
    num1 = temp;

    //swapping using XOR
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;

    //swapping using pointers 🤯



    printf("%d %d\n", num1, num2);
    printf("%d %d", n1, n2);

    return 0;
}