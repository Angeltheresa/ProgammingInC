#include <stdio.h>
int main()
{
    float P,R,T,CI;
    printf("Enter principle amount: ");
    scanf("%f", &P);
    printf("Enter time: ");
    scanf("%f", &T);
    printf("Enter rate: ");
    scanf("%f", &R);
    CI = P* (pow((1 + R / 100),T));
    printf("Compound Interest = %f", CI);
    return 0;
}