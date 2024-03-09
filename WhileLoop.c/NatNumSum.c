/*Calculate the sum of the first N natural numbers*/
#include<stdio.h>
int main() 
{
    int N, i=1, sum=0;
    printf("Enter the value of N");
    scanf("%d",&N);
while (i<=N)
{
    sum+=i;
    i++;
}
printf("The sum of first %d natural numbers is %d",N,sum);
return 0;
}
   