#include <stdio.h>
#define BUFFER 1000
void expands(char s1[], char s2[])
{
    int i, j;
    int start, end;
    j = i = 0;
    // \0 is 0 which evaluates to false
    while (s1[i] != '\0')
    {
        char tmp = s1[i];
        if (tmp == '-')
        {
            if ((i - 1) < 0 || s1[i + 1] == '\0')
            {
                s2[j++] = '-';
                i++;
                continue;
            }

            start = s1[i - 1];
            end = s1[++i];

            for (int k = start + 1; k < end - 1; k++)
            {
                s2[j++] = k;
            }
        }
        else
        {
            s2[j++] = s1[i];
            i++;
        }
    }
    s2[j] = '\0';
}

int main(int argc, char *argv[])
{
    char s2[BUFFER];
    char s1[] = "a-z";
    expands(s1, s2);
    printf("%s | %s\n", s1, s2);

    char s3[] = "-a-zA-Z0-9-";
    expands(s3, s2);
    printf("%s | %s\n", s1, s2);

    return 0;
}