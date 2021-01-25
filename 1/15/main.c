#include <stdio.h>

int convertTemp(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}

int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("fahr celsius\n");
    while (fahr <= upper)
    {
        celsius = convertTemp(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}