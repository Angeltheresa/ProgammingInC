#include <stdio.h>
int main() {
    float bsalary,hra,da,gsalary;
    printf("Enter the basic salary:");scanf("%f",&bsalary);
    if (bsalary >= 1 && bsalary <= 4000) {
        hra = 0.1 * bsalary;
        da = 0.5 * bsalary;
    } else if (bsalary >= 4001 && bsalary <= 8000) {
        hra = 0.2 * bsalary;
        da = 0.6 * bsalary;
    } else if (bsalary >= 8001 && bsalary <= 12000) {
        hra = 0.25 * bsalary;
        da = 0.7 * bsalary;
    } else if (bsalary > 12000) {
        hra = 0.3 * bsalary;
        da = 0.8 * bsalary;
    }

    gsalary = bsalary+hra+da;
    printf("Gross salary is :%.2f",gsalary);
return 0;
}