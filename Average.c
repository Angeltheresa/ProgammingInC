#include<stdio.h>
int main()
{
    double num1, num2, num3, average;
    printf("Enter three numbers",num1, num2, num3);
    scanf("%lf,%lf,%lf",&num1,&num2,&num3);
    average=(num1+num2+num3)/3;
    printf("The average of the three numbers is %.3f\n",average);
    return 0;
}