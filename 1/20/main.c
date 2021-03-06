#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
#define TAB_SPACES 4 /* how many spaces are a tab*/

int getLine(char s[], int lim);
void copy(char to[], char from[]);
void printTabsToSpaces(char s[], int len);
/* print the longest input line */

int main()
{
    int len;               /* current line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0)
    {
        printTabsToSpaces(line, len);
    }

    return 0;
}

void printTabsToSpaces(char s[], int len)
{
    for (int i = 0; i <= len - 1; ++i)
    {
        if (s[i] == '\t')
        {
            for (int j = 0; i <= TAB_SPACES; ++j)
                printf(" ");
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}

/* getline: read a line into s, return length */
int getLine(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
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