//Recursive function to search for an element in array
#include <stdio.h>
int srch(int num, int a[], int n);
int main()
{
    int a[20], num, n;
    printf("Enter the size");
    scanf("%d", &n);
    printf("Enter the numbers:");
    for (int i=0; i<n; i++)
    {
        scanf("%d, ", &a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d", &num);
    int x=srch(num, a, n);
    if (x==-1)
        printf("The element is not found");
    else
        printf("The element is found");
    return 0;
}



//Recursive function to count the digits of a positive integer
int srch(int num, int a[], int n)
{
    if (n<0)
        return -1;
    if (a[n]==num)
        return n;
    return srch(num, a, n-1);
}
#include <stdio.h>
int Count(int a);
int Sum(int a);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int count=Count(num);
    printf("The no of digits is:%d", count);
    int sum=Sum(num);
    printf("\nThe sum of digits is:%d", sum);
    return 0;
}
int count=0, sum=0;
int Count(int a)
{
    int rem;
    if (a==0)
        return count;
    else
    {
        a/=10;
        count++;
        return Count(a);
    }
}
int Sum(int a)
{
    int rem;
    if (a==0)
        return sum;
    else
    {
        rem=a%10;
        sum+=rem;
        a/=10;
        return Sum(a);
    }
}




//Reverse a null terminated string
#include <stdio.h>
#include <string.h>
char Rev(char a[10], char rev[10], int b, int n)
{
    if (n>=0)
    {
        rev[b]=a[n];
        return Rev(a, rev, b+1, n-1);
    }
    else
    {
        rev[b+1]='\0';
        printf("Reversed string:%s", rev);
        return 0;
    }
}
int main()
{
    char a[10], rev[10], reverse[10];
    int b=0;
    printf("enter the string:");
    scanf("%s", a);
    int n=strlen(a);
    Rev(a, rev, b, n-1);
    return 0;
}




//Convert a decimal to binary
#include <stdio.h>
int binary(int num, int x, int bnry[])
{
    if (num>0)
    {
        bnry[x]=num%2;
        num/=2;
        return binary(num, x+1, bnry);
    }
    else
    {
        //return (bnry,x);
        for (x=x-1; x>=0; x--)
        {
            printf("%d", bnry[x]);
        }
    }
}
int main()
{
    int num, x=0, bnry[20], bin[20], m;
    printf("Enter the number:");
    scanf("%d", &num);
    bin, m=binary(num, x, binary);
    return 0;
}




//Palindrome
#include<stdio.h>
#include<string.h>
int Rev(char b[], char rev[], int i, int j)
{
    if (i!=j)
    {
        rev[j]=b[i];
        return Rev(b, rev, i+1, j-1);
    }
    else
    {
        rev[j]='\0';
        int flag=0;
        for (int i=0; i<j; i++)
        {
            if (rev[i]!=b[i])
            {
                flag=1;
                break;
            }
        }
        return flag;
    }
}