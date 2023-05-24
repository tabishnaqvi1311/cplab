#include <stdio.h>
int main(){
    
    char name[10] = "tabish";
    char copiedName[10] = "";

    for(int i = 0; name[i]!='\0'; i++){
        copiedName[i] = name[i];
    }

    printf("Copied String: ");
    puts(copiedName);

    return 0;
}