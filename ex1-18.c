#include <stdio.h>

#define MAXLINE 1000

int getline(char s[], int lim);
void copy(char to[], char from[]);

int main()
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if ((len > max))
        {
            max = len;
            copy(longest, line);
        }
        if (max)
            printf("length: %d, line: %s", max, longest);
    }
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    int k = 0;
    int j = 0;

    while (from[k] != '\0')
    {
        int a = from[k];
        if (from[k] == '\n' || from[k] == ' ' || from[k] == '\t')
        {
            ++k;
            continue;
        }
        to[j] = from[k];
        ++j;
        ++k;
    }
}
