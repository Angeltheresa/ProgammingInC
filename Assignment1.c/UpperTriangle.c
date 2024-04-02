#include <stdio.h>
int main() 
{
    int rows, spaces;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int row = 1+(rows-1)*2;
    for (int i = 1,k=1; k <= rows; i+=2,++k) 
    {
        for (spaces = i; spaces <= row; spaces++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
return 0;
}
