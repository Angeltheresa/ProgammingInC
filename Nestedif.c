#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    if (number<100)
    {
        printf("It is a positive number less than 100\n");

        if(number%2==0)
        printf("The number is even\n");
        else
        printf("The number is odd\n");
    }
    else
    {
        printf("It is a positive number greater than 100");
    }
    return 0;

}