/*to check whether triangle is equilateral, scalene or isosceles*/
#include<stdio.h>
int main()
 {
    int side1, side2, side3;
    printf("Enter the sides of triangle:");
    scanf("%d %d %d", &side1, &side2, &side3);
    if ((side1==side2) && (side2==side3))
    {
        printf("It is an equilateral triangle");
    }
    else if ((side1==side2)||(side2==side3)||(side1==side3))
    {
        printf("It is an isoceles triangle");
    }
    else
    {
        printf("It is a scalene triangle");
    
    }
    return 0;
 }