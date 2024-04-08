/*Search*/
#include<stdio.h>
int main()
{
    int myArray[10],i,n,k,flag=0;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&myArray[i]);
    }
    printf("Enter element to be searched");
    scanf("%d",&k);
for(i=0;i<n;i++)
    {
        if (myArray[i]==k)
        {     printf("element found at position %d\n",i);
              flag=1;
            }
        }
    if(flag==0)
    {
        printf("element is not present in the array");
    }
return 0;
}