#include <stdio.h>
#include <math.h>
int main(){
    
    int dec;
    scanf("%d", &dec);

    int ans = 0, i = 0;

    while(dec!=0){
        int bit = dec&1;
        ans = ans + bit*pow(10, i);
        i++;
        dec = dec >> 1;
    }

    printf("%d", ans);

    return 0;
}