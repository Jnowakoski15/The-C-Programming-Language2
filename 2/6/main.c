#include <stdio.h>
// Not Complete
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

int main()
{
    int t1 = getbits(15, 4, 3);
    printf("~0 = %d\n", ~0);
    printf("(0 << 1)= %d\n", (0 << 1));
    printf("(~0 << 1)= %d\n", (~0 << 1));
    printf("%d\n", ~(~0 << 2));
    printf("%d\n", ~(~0 << 2));
    printf("%d\n", ~(~0 << 2));

    int x;
    x = x & (x - 1);
    return 0;
}