#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int getline(char s[], int lim);
char reverse_array(char arr_orig[], char arr_rvrsd[]);

int main()
{
    char line[MAXLINE], rvrsed[MAXLINE];

    while ((getline(line, MAXLINE)) > 0)
    {
        reverse_array(line, rvrsed);
        printf("line reversed: %s\n", rvrsed);
        memset(rvrsed, 0, sizeof(rvrsed));
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
char reverse_array(char arr_orig[], char arr_rvrsd[])
{
    int i, max = 0;
    while (arr_orig[max] != '\0')
        max++;

    for (i = 0; i < max; ++i)
        arr_rvrsd[i] = arr_orig[max - i - 1];
}