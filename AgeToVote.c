#include<stdio.h>
int main ()
{   
    int age;
    printf("Enter the age\n");
    scanf("%d",&age);
    if(age>21)
    {
        printf("Congratulations!You are eligible to cast your vote");
    }
    else
    {
        printf("You are not eligible to cast your vote.");
    }
    return 0;
}