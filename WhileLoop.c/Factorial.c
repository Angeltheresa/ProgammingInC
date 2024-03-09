/*Compute the factorial of a given number*/
#include<stdio.h>
int main()
{
    int num, factorial=1;
    printf("Enter the number: ");
    scanf("%d", &num);
while (num>0){
    factorial*=num;
    num--;
}
printf("%d", factorial);
return 0;
}