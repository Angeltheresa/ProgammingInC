#include <stdio.h>
int main() {
    int rows, spaces;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int srow = 1+(rows-1)*2;
    for (int i=srow,k = rows; k > 0;i-=2,k--) {
        for (spaces = i; spaces < srow; spaces++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
return 0;
}