#include <stdio.h>
#include <string.h>

#define BUFFER = 100

int strindex(char s[], char t[]);

int main()
{
    int idx = strindex("abcdefg", "ef");
    printf("%d\n", idx);

    idx = strindex("abcdefg", "q");
    printf("%d\n", idx);

    idx = strindex("abcdefg", "abcdefg");
    printf("%d\n", idx);
    return 0;
}

int strindex(char s[], char t[])
{
    int i, j, k;
    for (i = strlen(s) - 1; i >= 0; i--)
    {
        for (j = i, k = strlen(t) - 1; k >= 0 && s[j] == t[k]; j--, k--)
        {
            if (k == 0)
            {
                return j;
            }
        }
    }
    return -1;
}