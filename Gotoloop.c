#include <stdio.h>
int main () {
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        if (i == 2 && j == 2) {
            goto endLoop;
        }
        printf("(%d, %d) ", i, j);
    }
}
endLoop:
    return 0;
}