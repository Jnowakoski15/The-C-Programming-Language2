#include <stdio.h>
#define MAX_NUM_CHAR 26
#define CHAR_OFFSET 97
int main()
{

    int maxSize, c, wordSize;
    wordSize = maxSize = 0;
    int size[MAX_NUM_CHAR];

    for (int i = 0; i < MAX_NUM_CHAR; i++)
    {
        size[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            size[c - CHAR_OFFSET]++;
        }
    }

    for (int i = 0; i < MAX_NUM_CHAR; i++)
    {
        printf("%c: ", i + CHAR_OFFSET);
        for (int j = size[i]; j > 0; j--)
        {
            putchar('@');
        }
        putchar('\n');
    }
    return 0;
}