/*to find the factorial of a given number using while loop*/
#include<stdio.h>
int main()
{
    int n, i=1, factorial=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        factorial=factorial*i;
        //use i=i+1 or 
        i++;
    }
    printf("The factorial is %d :\n", factorial);
    return 0;
}