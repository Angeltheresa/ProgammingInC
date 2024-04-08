/*Reverse and insert*/
#include<stdio.h>
int main()
{
    int myArray[10],i,n,new_element,pos;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&myArray[i]);
    }
    printf("Enter element to be inserted");
    scanf("%d",&new_element);
    printf("enter position to be inserted");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)
    {
       myArray[i]=myArray[i-1];
    }
    myArray[pos-1]=new_element;
   printf("new Array is");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",myArray[i]);
    }
return 0;
}