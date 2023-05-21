#include <stdio.h>
int main(){
    
    int num1, num2;
    printf("Enter the two operands...\n");
    scanf("%d %d", &num1, &num2);

    int choice;

    printf("Choose operation: \n");
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("%d", num1+num2);
            break;
        case 2:
            printf("%d", num1-num2);
            break;
        case 3:
            printf("%d", num1*num2);
            break;
        case 4:
            printf("%d", num1/num2);
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}