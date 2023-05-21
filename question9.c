#include <stdio.h>
int main(){

    int numberOfPrimesToPrint;
    scanf("%d", &numberOfPrimesToPrint);
    int count = 1;

    printf("2 ");
    for(int i = 2; i <= numberOfPrimesToPrint; i++){
        int isPrime = 0, fixedNum = i;
        for(int j = 2; j < fixedNum; j++){
            if(fixedNum%j==0){
                isPrime = 0;
                break;
            }
            isPrime = 1;
        }
        if(isPrime==1){
            count++;
            printf("%d ", fixedNum);
        }
    }
    printf("\n%d", count);
    return 0;
}