#include <stdio.h>

void escape(char s[], char t[])
{
    int i, j;
    i = 0;
    j = 0;
    while (t[i] != '\0')
    {

        switch (t[i])
        {
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        default:
            s[j++] = t[i];
            break;
        }
        i++;
    }
    s[j] = '\0';
}

void scape(char s[], char t[])
{
    int i, j;
    i = 0;
    j = 0;
    while (t[i] != '\0')
    {
        switch (t[i])
        {
        case '\\':
            i++;
            switch (t[i])
            {
            case 'n':
                s[j] = '\n';
                j++;
                break;
            case 't':
                s[j] = '\t';
                j++;
                break;
            default:
                s[j++] = '\\';
                i--;
                break;
            }
            break;
        default:
            s[j++] = t[i];
            break;
        }
        i++;
    }
    s[j] = '\0';
}

int main()
{
    char t[] = "abcde\t\t\t\t\n";
    char s[500];
    escape(s, t);
    printf("%s\n", s);

    scape(t, s);
    printf("%s\n", t);

    return 0;
}