#include <stdio.h>
int main() {
   // int rows = 3,cols = 3;
    // Outer loop for rows
    for (int i = 0; i <=3; i++) {
        // Inner loop for columns
          printf("\nHello from outer loop with i =%d",i);
        for (int j = 0; j < 5; j++) {
            printf("\nHi from inner loop with j =%d",j);
        }
        printf("\n");
    }
    return 0;
}