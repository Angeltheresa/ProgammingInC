/*to convert the temperatures*/
#include<stdio.h>
int main() {
    int choice;
    float temperature, Converted;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    printf("Choose conversion type:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            // Celsius to Fahrenheit conversion
            Converted = (temperature * 9/5) + 32;
            printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, Converted);
            break;

        case 2:
            // Fahrenheit to Celsius conversion
            Converted = (temperature - 32) * 5/9;
            printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, Converted);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
