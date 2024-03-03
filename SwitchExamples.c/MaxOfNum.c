/*to find the maximum of two numbers*/
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers:   ");
    scanf("%d %d",&num1, &num2);
    switch(num1>num2){
        case 0:
            printf("%d is the maximum",num1);
            break;
        case 1:
            printf("%d is the maximum",num2);
            break;        
    }
    return 0;
}