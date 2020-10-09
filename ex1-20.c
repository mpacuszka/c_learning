#include <stdio.h>

#define MAXLINE 1000
#define MAXLINEDETABBED 1500
#define SPACES 4

int getline(char s[], int lim);
void detab(char to[], char from[], int n);

int main()
{
    char line[MAXLINE], detabbed[MAXLINEDETABBED] = {0};

    while (getline(line, MAXLINE) > 0)
    {
        detab(detabbed, line, SPACES);
        printf("line: %s\ndetabbed: %s\n", line, detabbed);
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

void detab(char to[], char from[], int n)
{
    int i = 0;
    int k = 0;

    while (from[i] != '\0')
    {
        if (from[i] == '\t')
        {
            for (int j = 0; j < n; ++j)
            {
                to[k+j] = ' ';
            }
            k += n;
            i++;
        }
        else
        {
            to[k] = from[i];
            i++;
            k++;
        }
    }
}
