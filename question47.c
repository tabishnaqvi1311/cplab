#include <stdio.h>
int main(){
    
    FILE *fp;
    char ch;
    int numberOfEven, numberOffOdd;

    fp = fopen("evenOddFile.txt", "r");
    
    if(fp==NULL){
        puts("FILE DOES NOT EXIST, PLEASE CREATE A NEW FILE BEFORE ATTEMPTING TO READ IT");
        return 0;
    }

    while(ch!=EOF){
        ch = fgetc(fp);
        int store = ch;
        if((store-48)%2==0){
            printf("%d is even\n", store-48);
        }
        else{
            printf("%d is odd\n", store-48);
        }
    }

    return 0;
}