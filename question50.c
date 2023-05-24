#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int *p;

    p = (int *)calloc(5, sizeof(int));

    for(int i = 0; i < 5; i++){
        p[i] = 2*i + 1;
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", p[i]);
    }
    printf("\n");

    p = realloc(p, 6);

    for(int i = 0; i < 6; i++){
        p[i] = 2*i;
    }
    for(int i = 0; i < 6; i++){
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}