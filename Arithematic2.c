#include <stdio.h>
int main()
{
   int a,b,c,d;
   int resultI, resultII, resultIII, resultIV;
   printf("Enter the digits");
   scanf("%d %d %d %d",&a, &b, &c, &d);
   resultI=a+b-c+d;
   resultII=a*b/c+d;
   resultIII=1+a*b%c;
   resultIV=a+d%b-c;
   printf("\nResult one: %d",resultI);
   printf("\nResult two: %d",resultII);
   printf("\nResult three: %d",resultIII);
   printf("\nResult four: %d",resultIV);
   
   return 0;

}