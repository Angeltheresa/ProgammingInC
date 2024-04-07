#include<stdio.h>

int main()
{
    int array[10], n, i, temp, pass;
    
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }
    for (pass = 0; pass < n - 1; pass++) 
    { 
        printf("Pass %d\n", pass + 1);
        for (i = 0; i < n - 1; i++) 
        {
            if (array[i] > array[i + 1]) 
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    printf("In ascending order: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}
