#include <stdio.h>
#include <ctype.h>

int htoi(char hex[]);

int main()
{
    printf("0x29A == %d\n", htoi("0x29A"));
    printf("0X29A == %d\n", htoi("0X29A"));
    printf("0X29a == %d\n", htoi("0X29a"));
    printf("29A == %d\n", htoi("29A"));
    printf("29a == %d\n", htoi("29a"));

    return 0;
}


int htoi(char hex[])
{
    int dec = 0;
    int tmp = 0;
    for (int i; hex[i] != '\0';++i)
    {

        if (hex[i] >= '0' && hex[i] <= '9')
            tmp = hex[i] - '0';

        if (tolower(hex[i]) >= 'a' && tolower(hex[i]) <= 'f')
            tmp = tolower(hex[i]) - 'a' + 10;

        dec = (dec * 16) + tmp;

    }   
    return dec;
}