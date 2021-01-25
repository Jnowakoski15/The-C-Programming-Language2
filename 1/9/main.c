#include <stdio.h>

main()
{
    int c, inWhite;
    inWhite = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (!inWhite)
            {
                putchar(c);
            }
            inWhite = 1;
        }
        else
        {
            putchar(c);
            inWhite = 0;
        }
    }
}