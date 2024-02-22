#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number one\n",a);
    scanf("%d",&a);
    printf("Enter number two",b);
    scanf("%d",&b);
    printf("Addition of %d and %d=%d\n",a,b,a+b);
    printf("Subtraction of %d and %d=%d\n",a,b,a-b);
    printf("Division of %d and %d=%d\n",a,b,a/b);
    printf("Multiplication of %d and %d=%d\n",a,b,a*b);
    printf("Remainder of %d and %d=%d\n",a,b,a%b);
    return 0;
}
