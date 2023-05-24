#include <stdio.h>
int main(){
    struct emp{
        char name;
        float salary;
        int unitsSold;
    };

    struct emp empdetails[50];

    for(int i = 0; i < 3; i++){
        printf("ENTER DETAILS OF EMPLAOYEE NUMBER: %d\n", i);
        scanf("%s", &empdetails[i].name);
        scanf("%f", &empdetails[i].salary);
        scanf("%d", &empdetails[i].unitsSold);
    }

    int units;
    printf("\nSEARCH BY UNITS SOLD: ");
    scanf("%d", &units);

    for(int i = 0; i < 3; i++){
        if(empdetails[i].unitsSold == units){
            printf("%s", empdetails[i].name);
        }
    }
    return 0;
}