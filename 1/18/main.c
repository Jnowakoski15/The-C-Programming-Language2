#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getLine(char s[], int lim);
void copy(char to[], char from[]);
int cleanline(char s[], int lim);
/* print the longest input line */

int main()
{
    int len;               /* current line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    max = 0;
    int newLen;
    while ((len = getLine(line, MAXLINE)) > 0)
    {
        newLen = cleanline(line, len);
        if (newLen != 0)
        {
            printf("%s\n", line);
        }
    }

    return 0;
}

int cleanline(char s[], int lim)
{
    int last = lim;
    for (int i = lim - 1; i >= 0; --i)
    {
        if (s[i] == '\t' || s[i] == ' ')
        {
            s[i] = '\0';
            last = i;
            continue;
        }
        break;
    }
    return last;
}

/* getline: read a line into s, return length */
int getLine(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
        if (c == '\n')
        {
            s[i] = c;
            ++i;
        }
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}