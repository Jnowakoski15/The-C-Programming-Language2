#include <stdio.h>
#include <string.h>
#include <limits.h>

#define BUFFER 1000
/* reverse: reverse string s in place */
void reverse(char s[]);
/* itoa: convert n to characters in s */
void itob(int n, char s[], int b);

int main()
{
    char s[BUFFER];
    int base = 16;
    itob(INT_MIN, s, base);
    printf("%s\n", s);

    itob(INT_MAX, s, base);
    printf("%s\n", s);

    itob(-1, s, base);
    printf("%s\n", s);

    return 0;
}

void itob(int n, char s[], int b)
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
        int tmp = n2 % b;
        if (tmp <= 9)
        {
            s[i++] = tmp + '0';
        }
        else
        {
            s[i++] = tmp - 10 + 'A'; /* get next digit */
        }

    } while ((n2 /= b) > 0); /* delete it */
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