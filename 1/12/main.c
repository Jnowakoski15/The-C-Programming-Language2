#include <stdio.h>

main()
{
    int c, nl;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == '\t' || c == ' ')
        {
            putchar('\n');
        }
        else
        {
            putchar(c);
        }
    }
}