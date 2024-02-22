#include <stdio.h>
int main()
{
   int a,b;
   printf("Enter the first digit");
   scanf("%d",&a);
   printf("Enter the second digit");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=b-a;
   printf("After swapping first number=%d",a);
   printf("After swapping second number=%d",b);
   return 0;

}