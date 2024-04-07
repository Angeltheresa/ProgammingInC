#include <stdio.h>
int main()
{
    int m = 5;
    for (; m != 50;)
    {
        printf("%d\t", m);
        m = m + 5;
    }
    return 0;
}