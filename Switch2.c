/*to enter a char and print it as vowel or consonant*/
#include<stdio.h>
int main() { 
char letter;
printf("Enter the character:  ");
scanf("%c",&letter);
switch(letter)
 {
     case 'a':
     printf("Vowel");
     break;
     case 'e':
     printf("Vowel");
     break;
     case 'i':
     printf("Vowel");
     break;
     case 'o':
     printf("Vowel");
     break;
     case 'u':
     printf("Vowel");
     break;
     default:
     printf("Consonant");
 }
return 0;
}


/*displays the number of days in that month*/
#include<stdio.h>
int main()
{
int num;
printf("Enter a month number: ");
scanf("%d",&num);
switch(num)
 {
     case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31 days\n");
        break;
     case 4: case 6: case 9: case 11:
        printf("30 days\n");
        break;
     case 2:
        printf("28 days\n");
        break;
     default:
        printf("Invalid\n");
 } 

    return 0;
}


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
