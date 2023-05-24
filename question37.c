#include <stdio.h>
#include <string.h>
int main(){

    struct student{
        char name[100];
        float marks;
        int rollNumber;
    };

    struct student student1 = {"tabish", 95.5, 102208041};
    struct student student2 = {"jake", 90.5, 102208043};
    struct student student3 = {"killua", 89, 102208042};

    printf("name: %s\nmarks: %f\nrollNumber: %d", student2.name, student2.marks, student2.rollNumber);

    return 0;
}