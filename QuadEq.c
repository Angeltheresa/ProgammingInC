#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discriminant, root1, root2, rPart, iPart;
    printf("Enter the values for a b and c (ax^2 + bx + c): ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\nRoot 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and the same.\nRoot 1 = Root 2 = %.2f\n", root1);
    }
    else {
        rPart = -b / (2 * a);
        iPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + i%.2f\n", rPart, iPart);
        printf("Root 2 = %.2f - i%.2f\n", rPart, iPart);
    }
    
    return 0;
}
