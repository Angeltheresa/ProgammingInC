#include<stdio.h>
int main() 
{
    int rows, cols, A[10][10], B[10][10], C[10][10], i, j;
    printf("Enter the number of rows and columns for matrices A and B: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("The resultant matrix C:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
