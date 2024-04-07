#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    char choice;
    do{
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator.\n");
            //return 1; // Indicates error
    }
    printf("Result: %lf\n", result);
    printf("Do you want to continue? (Enter 'y' for yes, 'n' for no): ");
        scanf(" %c", &choice);

    }while(choice=='Y'|| choice=='y')  ; 

    return 0;
}