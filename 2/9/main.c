#include <stdio.h>

int bitcount1(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>= 1)
    {
        if (x & 01)
        {
            b++;
        }
    }
    return b;
}

int bitcount2(unsigned x)
{
    int b;
    for (b = 0; x != 0; x &= (x - 1))
    {
        printf("%d\n", x);
        b++;
    }
    return b;
}

int main()
{
    unsigned x = 7;

    /*
    pass0: 00111 = 7
    pass1: 00111 & 00110 = 00110 = 6
    pass2: 00110 & 00101 = 00100 = 4
    pass3: 00100 & 00000 = 00000 = 0 
    */
    printf("%d\n", bitcount2(x));
    return 0;
}