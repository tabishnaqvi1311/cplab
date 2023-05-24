#include <stdio.h>

int gcd(int x, int y){
    if(y==0){
        return x;
    }
    return gcd(y, x%y);
}

int lcm(int x, int y){
    if(y==0){
        return x;
    }
    int storeGcd = gcd(x, y);
    return (x*y)/storeGcd;
}

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("gcd of %d and %d is %d\n",num1, num2, gcd(num1, num2));
    printf("lcm of %d and %d is %d", num1, num2, lcm(num1, num2));
    return 0;
}