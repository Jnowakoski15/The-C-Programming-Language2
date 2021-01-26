#include <stdio.h>
#include <limits.h>
#include <float.h>
/* print the longest input line */

void printChar()
{
    char test = 0;
    int min, max;
    min = max = 0;

    while (1)
    {
        ++test;
        if (test > max)
        {
            max = test;
        }
        if (test < min)
        {
            min = test;
            break;
        }
    }

    printf("Char Min: %d | Max: %d\n", min, max);
}

void printShort()
{
    short test = 0;
    int min, max;
    min = max = 0;

    while (1)
    {
        ++test;
        if (test > max)
        {
            max = test;
        }
        if (test < min)
        {
            min = test;
            break;
        }
    }

    printf("Short Min: %d | Max: %d\n", min, max);
}

void printInt()
{
    int test = 0;
    int min, max;
    min = max = 0;

    while (1)
    {
        ++test;
        if (test > max)
        {
            max = test;
        }
        if (test < min)
        {
            min = test;
            break;
        }
    }

    printf("Int Min: %d | Max: %d\n", min, max);
}

void printLong()
{
    // Takes Toooo long to run
    
    /*  long test = 0;
    int min, max;
    min = max = 0;

    while (1)
    {
        ++test;
        if (test > max)
        {
            max = test;
        }
        if (test < min)
        {
            min = test;
            break;
        }
    } */

    printf("Long Min: %ld | Max: %ld\n", LONG_MIN, LONG_MAX);
}

int main()
{
    printChar();
    printShort();
    printInt();
    printLong();
    return 0;
}