#include<stdio.h>
int main() 
{
    int n, rem, result = 0, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n; // Assigning the value of n to num
    while (n > 0) 
    {
        rem = n % 10;
        result += (rem * rem * rem); // Correct calculation for Armstrong number
        n = n / 10;
    }
    if (num == result)
    {
        printf("Yes, it is an Armstrong number.\n");
    } 
    else
    {
        printf("No, it is not an Armstrong number.\n");
    }
    return 0;
}
