#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define BASE 16.0
int getStringLen(char s[])
{
    int i, len;
    i = 0;
    while (1)
    {
        if (s[i] == '\0')
        {
            return i - 1;
        }
        i++;
    }
    return -1;
}
double htoi(char s[])
{
    double output;
    int len, i, count;
    len = getStringLen(s);
    count = output = 0;
    for (i = len; i > 1; i--)
    {
        char c = s[i];
        int value = -1;
        if (c >= '0' && c <= '9')
        {
            value = c - 48; /*48 is the offset char 0 to ascii value 0*/
        }
        if (c >= 'a' && c <= 'f')
        {
            value = c - 87; /*87 is the offset to ascii value 10 from a*/
        }

        if (c >= 'A' && c <= 'F')
        {
            value = c - 55; /*55 is the offset to ascii value 10 from a*/
        }

        double adder = value * pow(BASE, count);
        output += adder;

        count++;
    }
    return output;
}

void printVals(char c[], double dec)
{
    printf("Hex: %s | Decimal: %lf\n", c, dec);
}

int main()
{

    char t1[] = "0x11111111";
    char t2[] = "0xFFFFFFFF";
    char t3[] = "0x010F010C";
    printVals(t1, htoi(t1));
    printVals(t2, htoi(t2));
    printVals(t3, htoi(t3));
    return 0;
}
