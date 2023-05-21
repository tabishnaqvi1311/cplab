#include <stdio.h>
#include <math.h>
int main(){
    
    int bin;
    scanf("%d", &bin);

    int i = 0, ans = 0;

    while(bin != 0){
        int digit = bin%10;
        ans = ans + pow(2, i)*digit;
        bin/=10;
        i++;
    }

    printf("%d", ans);

    return 0;
}