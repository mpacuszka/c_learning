#include <stdio.h>


int any(char s[], char c[]);


int main()
{   
    char zz[] = "ABCDEF";



    printf("%s\n", zz);
    printf("Z on index: %d\n", squeeze_chars(zz, "Z"));
    printf("CD on index: %d\n", squeeze_chars(zz, "CD"));
    printf("EFDD on index: %d\n", squeeze_chars(zz, "EFDD"));


    return 0;
}

int any(char s[], char c[])
{
    for (int i = 0; s[i] != '\0'; ++i)
    {
        for (int k = 0; c[k] != '\0'; k++)
            if (s[i] == c[k])
                return i;

    }
    return -1;
}
