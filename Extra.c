/*prime number using for loop*/
#include<stdio.h>
int main(){
    int n,i,isprime=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%2==0){
            printf("It is a prime number");
            break;
        }
    }
        if(isprime){
            printf("It is a prime number");
        }
        else{
            printf("It is not a prime number");
        }
    return 0;
}


/*sum and average*/
{
    int n,i,arr[10],sum=0,avg;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    printf("The sum is %d",sum);
    printf("The average is %d",avg);
    return 0;
}

/*linear search*/
{
    int n,i,arr[10],num,flag=1;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements to be searched");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]==num)
        flag=0;
        break;
    }
    if(flag=1){
        printf("Element found");
            
    }
    else
        {
            printf("Element not found");
        }
    return 0;
}

/*Palindrome*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len,i,flag=1;
    printf("Enter any string\n");
    scanf("%s",&str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=str[len-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }
    return 0; 
    
}

