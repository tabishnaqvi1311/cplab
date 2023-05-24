#include <stdio.h>

int fibb(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibb(n-1) + fibb(n-2);
}

int main(){
    
    int numberOfTerms;
    scanf("%d", &numberOfTerms);

    for(int i = 0; i <= numberOfTerms; i++){
        printf("%d ",fibb(i));
    }

    return 0;
}