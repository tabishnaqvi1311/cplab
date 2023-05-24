#include <stdio.h>
int main(){
    
    FILE *fp;
    char filename[20];

    gets(filename);

    fp = fopen(filename, "w");

    printf("FILE CREATED");

    fclose(fp);

    return 0;
}