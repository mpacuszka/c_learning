#include <stdio.h>
#include <ctype.h>

void squeeze_char(char s[], int c);
void squeeze_chars(char s[], char c[]);


int main()
{
    char z[] = "ABCDE";
    char zz[] = "ABCDEF";
    printf("%s => ", z);
    squeeze_char(z, 'B');
    printf("%s\n", z);


    printf("%s => ", zz);
    squeeze_chars(zz, "CD");
    printf("%s\n", zz);


    return 0;
}


void squeeze_char(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; ++i)
    {
        if (s[i] !=c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

void squeeze_chars(char s[], char c[])
{
    int i, j;
    int a = 0;

    for (i = j = 0; s[i] != '\0'; ++i)
    {
        for (int k = 0; c[k] != '\0'; k++)
            if (s[i] == c[k])
            {
                a = 1;
                break;
            }
        if(!a)
            s[j++] = s[i];
        else
            a = 0;
    }
    s[j] = '\0';
}
