#include <stdio.h>
int main ()
{
    int re1,img1,re2,img2;
    printf("Enter the real and imaginary part of first comlex no:(a b):");scanf("%d %d",&re1,&img1);
    printf("Enter the real and imaginary part of second comlex no:(a b):");scanf("%d %d",&re2,&img2);
    int real = re1+re2;
    int img = img1+img2;
    printf("\n%d + i%d  \n%d + i%d  +\n--------------\n= %d + i%d\n ",re1,img1,re2,img2,real,img);
    return 0;
}