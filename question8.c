#include <stdio.h>
int main(){
    
    int toCheckPrime;

    scanf("%d", &toCheckPrime);

    if(toCheckPrime == 0 || toCheckPrime == 1){
        printf("%d is not prime", toCheckPrime);
        return 0;
    }

    for(int i = 2; i < toCheckPrime; i++){
        if(toCheckPrime%i == 0){
            printf("%d is not prime", toCheckPrime);
            return 0;
        }
    }

    printf("%d is prime", toCheckPrime);

    return 0;
}