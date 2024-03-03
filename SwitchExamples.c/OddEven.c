/*to find if the number is odd or even*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    switch(num%2){
        case 0:
            printf("Number is even");
            break;
        case 1:
            printf("Number is odd");
            break;    
    }
    return 0;
}