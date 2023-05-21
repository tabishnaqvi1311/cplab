#include <stdio.h>
int main(){
    
    int firstTerm = 0, secondTerm = 1, numberOfTerms;
    scanf("%d", &numberOfTerms);

    printf("%d %d ", firstTerm, secondTerm);

    for(int i = 0; i < numberOfTerms; i++){
        int nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        printf("%d ", nextTerm);
    }

    return 0;
}