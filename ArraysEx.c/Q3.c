/*Delete*/
#include <stdio.h>
int main() {
    int arr[50];
    int n, position;
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    // Input array elements
    printf("Enter elements into the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the position to delete
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &position);
    // Check if the position is valid
    if (position < 1 || position > n) {
        printf("Invalid position.\n");
        return 1; // Exit with an error code
    }
    // Shift elements to delete the specified position
    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    // Decrement the size of the array
    n--;
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;}