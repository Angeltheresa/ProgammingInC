/*Reverse the digits of a given number*/
#include<stdio.h>
int main()
{
    int num, reversedNum=0,r;
    printf("Enter a given number: ");
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        reversedNum=reversedNum*10+r;
        num=num/10;

    }
printf("The reversed number is %d", reversedNum);
return 0;
}