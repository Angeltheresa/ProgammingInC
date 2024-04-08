#include <stdio.h>
int main() {
    int marks[3] = {19, 10, 8, 17, 9, 11, 13};
    // Calculate the size of the array
    int arraySize = sizeof(marks) / sizeof(marks[0]);
    // Print the size of the array
    printf("Size of the array: %d\n", arraySize);
    return 0;
}