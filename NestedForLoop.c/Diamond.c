#include <stdio.h>
int main() {
    int rows, spaces;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    //upper triangle pattern
    for (int i = 1; i <= rows+1; i++) {
        //to print spaces
        for (spaces = i; spaces < rows+1; spaces++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    //lower triangle pattern
    for (int i = rows; i >= 0; i--) {
        //to print spaces
        for (spaces = i; spaces < rows+1; spaces++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
return 0;
}