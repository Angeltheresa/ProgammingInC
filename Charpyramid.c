#include <stdio.h>
int main() {
    int rows, spaces;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (spaces = i; spaces < rows; spaces++) {
            printf(" ");
        }
       char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}