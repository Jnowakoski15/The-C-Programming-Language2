#include <ctype.h>
#include <stdio.h>
#include <math.h>

//https://clc-wiki.net/wiki/K%26R2_solutions:Chapter_4:Exercise_2
double atof(char s[]);

double atof(char s[])
{
    double val, power, base, p;
    int i, sign, exp;

    for (i = 0; isspace(s[i]); i++)
    {
        ; // Do nothing skip whitespace
    }
    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
    {
        i++;
    }
    for (val = 0.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
    }
    if (s[i] == '.')
    {
        i++;
    }
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    if (s[i] == 'e' || s[i] == 'E')
        i++;
    else
        return sign * val / power;

    base = (s[i] == '-') ? 0.1 : 10.0; /* 10^(-n) = 1/10^n = (1/10)^n = (0.1)^n */
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (exp = 0; isdigit(s[i]); i++)
        exp = 10 * exp + (s[i] - '0');
    for (p = 1; exp > 0; --exp)
        p = p * base;

    return (sign * (val / power)) * p;
}

int main()
{
    double out;
    out = atof("-33.333");
    printf("%lf\n", out);

    out = atof("-33.333e6");
    printf("%lf\n", out);

    out = atof("-33.333e-6");
    printf("%lf\n", out);

    out = atof("1.0e6");
    printf("%lf\n", out);
    return 0;
}