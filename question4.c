#include <stdio.h>
int main(){
    
    double temp;
    char unit;
    printf("Enter the value of the temperature: \n");
    scanf("%lf", &temp);
    printf("What would you like to convert to? (c/f)\n");
    scanf(" %c", &unit);

    if(unit == 'c'){
        printf("%lf", (temp-32)*0.555);
    }
    else if(unit == 'f'){
        printf("%lf", (temp*1.8) + 32);
    }
    else{
        printf("INCORRECT UNIT!, run again!");
    }
    return 0;

}