#include <stdio.h>

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}



int main()
{
    int t1 = getbits(15, 4, 3);
    printf("%d\n", t1);
    return 0;
}