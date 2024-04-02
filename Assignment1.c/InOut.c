#include <stdio.h>
int main() {
    int n,sum1=0,sum2=0, temp = 2;
    printf("Enter the no of terms:");scanf("%d",&n);
    for(int i =1; i<=n;++i){
    sum1 = sum1*10+temp;
    printf("%d+",sum1);
    sum2 += sum1;
    }
    printf("=%d",sum2);
    return 0;
}