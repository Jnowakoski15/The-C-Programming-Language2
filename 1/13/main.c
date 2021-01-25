#include <stdio.h>
#define MAX_WORD_SIZE 10

main()
{

    int maxSize, c, wordSize;
    wordSize = maxSize = 0;
    int size[MAX_WORD_SIZE];

    for (int i = 0; i < MAX_WORD_SIZE; i++)
    {
        size[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            size[wordSize - 1]++;
            wordSize = 0;
        }
        wordSize++;
    }

    for (int i = 0; i < MAX_WORD_SIZE; i++)
    {
        printf("%d: ", i);
        for (int j = size[i]; j > 0; j--)
        {
            putchar('@');
        }
        putchar('\n');
    }
}