#include <stdio.h>
int main(){
    float pi = 3.14;
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("AREA: %f\n", pi*radius*radius);
    printf("PERIMETER: %f", 2*pi*radius);

    return 0;
}