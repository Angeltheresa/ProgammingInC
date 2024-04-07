#include<stdio.h>
int main()
{
int myArray[10],i,n,sum=0;
float avg;
printf("Enter the number of elements: \n");
scanf("%d",&n);
printf("Enter the element:\n");
for(i=0;i<n;i++)
{
  scanf("%d",&myArray[i]);
  sum=sum+myArray[i];
}
avg=sum/n;
printf("Sum of the elements are:%d\n",sum);
printf("Average of the elements are %f ",avg);
return 0;
}
