#include <stdio.h>
int main(){
    
    FILE *fp;
    char ch;
    int numberOfChars = 0, numberOfWords = 1, numberOfLines = 1;

    fp = fopen("file.txt", "r");

    if(fp==NULL){
        puts("CANNOT OPEN FILE DOES NOT EXIST");
        return 0;
    }

    while(ch!=EOF){
        ch = fgetc(fp);

        numberOfChars++;

        if(ch==' '){
            numberOfWords++;
        }

        if(ch=='\n'){
            numberOfLines++;
        }
    }
    printf("Number of Chars = %d\nNumber of Words = %d\nNumber of Lines = %d", numberOfChars, numberOfWords, numberOfLines);

    return 0;
}