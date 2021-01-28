#include <stdio.h>

#define OFFSET 32

void lower(char s[])
{
    int i;
    i = 0;
    while (s[i++] != '\0')
    {
        char tmp = s[i];
        s[i] = (tmp >= 'A' && tmp <= 'Z') ? (tmp + OFFSET) : tmp;
    }
}

int main()
{
    char a[] = ":ALSKJDFIYASLK:JDAASDIOY&&&";
    lower(a);
    printf("%s\n", a);
    return 0;
}