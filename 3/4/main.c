#include <stdio.h>
#include <string.h>
#include <limits.h>

#define BUFFER 1000
/* reverse: reverse string s in place */
void reverse(char s[]);
/* itoa: convert n to characters in s */
void itoa(int n, char s[]);

int main()
{
    char s[BUFFER];
    itoa(INT_MIN, s);
    printf("%s\n", s);

    itoa(INT_MAX, s);
    printf("%s\n", s);

    itoa(-1, s);
    printf("%s\n", s);

    return 0;
}

void itoa(int n, char s[])
{
    int i, sign;
    i = 0;
    unsigned n2;
    if ((sign = n) < 0)
    {            /* record sign */
        n2 = -n; /* make n positive */
    }
    else
    {
        n2 = n;
    }
    do
    {
        /* generate digits in reverse order */
        s[i++] = n2 % 10 + '0'; /* get next digit */
    } while ((n2 /= 10) > 0);   /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}