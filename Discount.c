/*Problem Statement: A store gives discounts based on membership status and the amount spent.Members spending over Rs.100 get a 10% 
discount, non-members spending over Rs.150 get a 5% discount,and all others get no discount.*/
#include  <stdio.h> 
int main() {
    int isMember = 1;
    float purchaseAmount = 120.0;
    if (isMember) {
        if (purchaseAmount  >  100) {
            printf("Discount: 10%%\n");
        } else {
            printf("Discount: 0%%\n");
        }
    } else {
        if (purchaseAmount  >  150) {
            printf("Discount: 5%%\n");
        } else {
            printf("Discount: 0%%\n");
        }
    }
    return 0;
}