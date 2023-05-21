#include <stdio.h>
int main(){
    
    int numToFact, fact = 1;
    scanf("%d", &numToFact);

    for(int i = 1; i <= numToFact; i++){
        fact=fact*i;
    }
    
    printf("%d", fact);
    return 0;
}