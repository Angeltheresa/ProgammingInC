#include <stdio.h>
int main()
{
   int first, second, temp;
   printf("Enter the first digit");
   scanf("%d",&first);
   printf("Enter the second digit");
   scanf("%d",&second);
   temp=first;
   first=second;
   second=temp;
   printf("After swapping first number=%d",first);
   printf("After swapping second number=%d", second);
   return 0;
}