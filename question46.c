#include <stdio.h>
int main(){
    
    FILE *fp, *fs;
    char ch;

    fp = fopen("file.txt", "r");

    if(fp==NULL){
        puts("404: FILE hello DOES NOT EXIST");
        return 0;
    }

    fs = fopen("copyOfHello.txt", "w");
    if(fs==NULL){
        puts("404: FILE copy DOES NOT EXIST");
        fclose(fp);
        return 0;
    }

    while(ch!=EOF){
        ch = fgetc(fp);
        fputc(ch, fs);
    }

    fclose(fp);
    fclose(fs);

    return 0;
}