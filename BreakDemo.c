#include <stdio.h>
int main () {
   for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;  
        // Exit the loop when i is 5
    }
    printf("\n%d ", i);
}
    return 0;
}