#include <stdio.h>
#include <stdbool.h>
bool contains(char test, char t[])
{
    int i = 0;
    while (t[i] != '\0')
    {
        if (test == t[i])
        {
            return true;
        }
        i++;
    }
    return false;
}

void squeeze(char s[], char t[])
{
    int i, j;
    i = j = 0;
    char out[50];
    while (s[i] != '\0')
    {
        if (!contains(s[i], t))
        {
            out[j] = s[i];
            j++;
        }
        i++;
    }
    s = out;
    printf("%s", s);
}

int main()
{
    squeeze("abcdef", "cf");
    return 0;
}