/*to create a calculator using switch statement*/
#include<stdio.h>
int main()
{
    int num1, num2, result;
    char calculation;
     printf("Enter an operator (+,-,*,/,%)\n");
    scanf("%c",&calculation);
    printf("Enter the number: ");
    scanf("%d %d",&num1 ,&num2);
    

    switch (calculation)
    {
         case '+':
            result=num1+num2;
            printf("%d+%d=%d\n",num1,num2,result);
            break;

         case '-':
            result=num1-num2;
            printf("%d-%d=%d\n",num1,num2,result);
            break;

         case '*':
            result=num1*num2;
            printf("%d*%d=%d\n",num1,num2,result);
            break;

         case '/':
             if(num2!=0)
            {
               result=num1/num2;
               printf("%d/%d=%d\n",num1, num2,result);
            }
             else 
            {
                printf("Error\n");
            }
            break;

         case '%':
             if(num2!=0)
            {
               result=num1%num2;
               printf("%d%%%d=%d\n",num1,num2,result);
            }
             else 
            {
                printf("Error\n");
            }
            break;

         default:
            printf("Invalid calculation\n");

    }
    return 0;

}