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

int any(char s[], char t[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (contains(s[i], t))
        {
            return i;
        }
        i++;
    }
    return -1;
}

int main()
{
    int t1 = any("abcdef", "cf");
    printf("%d\n", t1);
    return 0;
}