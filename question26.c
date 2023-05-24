#include <stdio.h>

int findFact(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    
    int num;
    scanf("%d", &num);

    printf("%d", findFact(num));

    return 0;
}