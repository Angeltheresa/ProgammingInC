#include <stdio.h>
int main() {
    int range;
    printf("Enter the range: ");
    scanf("%d", &range);
    for (int i = 2; i <= range; i++) {
        int flag = 0;
        for (int j = 2; j <= i/2; j++) {
            if (i%j==0){
                flag =1;break;
            }
        }
        if (flag==0)printf("%d ",i);
    }
return 0;