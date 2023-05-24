#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    char s1[10] = "hello";
    char s2[10] = "hello";

    //length of two stirngs
    printf("%ld %ld",strlen(s1), strlen(s2));

    //using strcmp to compare the two strings
    strcmp(s1, s2)?(printf("The strings are not equal.\n")):printf("The strings are equal.\n");

    //convert to lowercase


    return 0;
}