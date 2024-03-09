/*Display the multiplication table of a given number*/
//Table of a Number n*i= n*i
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    i = 1;
    while (i <= 10) {
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }    
return 0;
}
