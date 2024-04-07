#include <stdio.h>

int main() 
{
    int myArray[10], i, n, num;
    printf("Limit: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &myArray[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &num);
    int flag = 0;
    for (i = 0; i < n; i++) 
    {
        if (myArray[i] == num) 
        {
            printf("Element found at index %d\n", i);
            flag = 1;
        }
    }
    if (flag == 0) 
    {
        printf("Element not found\n");
    }
    return 0;
}
