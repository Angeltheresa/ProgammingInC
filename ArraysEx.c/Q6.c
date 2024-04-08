/*Reverse*/
#include<stdio.h>
int main() {
    int myArray[10],reversedArray[10], i,j ,n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements into the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &myArray[i]);
    }
 // Find the reverse of the array using the modified code
    for(i = n - 1, j = 0; i >= 0; i--, j++) {
        reversedArray[j] = myArray[i];
    }
    printf("\nElements of Original Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", myArray[i]);
    }
    printf("\nElements of Reversed Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", reversedArray[i]);
    }
    return 0;
}