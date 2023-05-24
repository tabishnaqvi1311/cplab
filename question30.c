#include <stdio.h>

int findFact(int num){
    int fact = 1;
    if(num<=1){
        return fact;
    }
    fact = num * findFact(num - 1);
    return fact;
}

int main(){
    int num;
    scanf("%d", &num);
    printf("%d", findFact(num));
    return 0;
}