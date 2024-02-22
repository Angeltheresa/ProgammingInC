#include <stdio.h>
int main() 
{
    float P, R,T,SI;
    printf("Enter principal amount: ");
    scanf("%f", &P);
    printf("Enter interest rate: ");
    scanf("%f", &R);
    printf("Enter time period: ");
    scanf("%f", &T);
    SI=(P*R*T)/100;
    printf("\nSimple Interest is: %f",SI);
    return 0;
}
