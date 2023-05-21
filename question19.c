#include <stdio.h>
#include <math.h>

int checkPali(int n){
    int ans = 0, i = 0;
    while(n!=0){
        int digit = n % 10;
        ans = ans*10 + digit;
        n/=10;
        i++;
    }
    return ans;
}

int main(){
    int num;
    scanf("%d", &num);

    checkPali(num)==num?(printf("PALINDROME")):(printf("NOT PALINDROME"));
    
    return 0;
}