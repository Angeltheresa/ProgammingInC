#include <stdio.h>
int main() {
    int number, isPrime = 1; 
    // Assuming the number is prime by default
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number <= 1) {
        isPrime = 0;  
        // 0 and 1 are not prime numbers
    } 
    else {
           for (int i = 2; i <= number / 2; ++i) 
           {
            if (number % i == 0) {
                isPrime = 0;  // Not a prime number
                break;
            }
        }
    }
    // Check and display the result
    if (isPrime)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}