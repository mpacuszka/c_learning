#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("CHAR MAX= %d, BYTES = %d\n", CHAR_MAX, sizeof(char));
    printf("UCHAR MAX= %d, BYTES = %d\n", UCHAR_MAX, sizeof(unsigned char));

    printf("INT MAX= %d, BYTES = %d\n", INT_MAX, sizeof(int));
    printf("UINT MAX = %u, BYTES = %d\n", UINT_MAX, sizeof(unsigned int));
    
    printf("SHORT MAX = %llu, BYTES = %d\n", SHRT_MAX, sizeof(short));
    printf("USHORT MAX = %llu, BYTES = %d\n", USHRT_MAX, sizeof(unsigned short));
    
    printf("LONG MAX = %lu BYTES = %d\n", ULONG_MAX, sizeof(unsigned long));
    printf("ULONG MAX = %lu BYTES = %d\n", ULONG_MAX, sizeof(unsigned long));

    printf("LONG LONG MAX = %llu, BYTES = %d\n", ULONG_LONG_MAX, sizeof(unsigned long long));
    printf("ULONG LONG MAX = %llu, BYTES = %d\n", ULONG_LONG_MAX, sizeof(unsigned long long));

// --------------------------------------------

   printf("The maximum value of float = %.llu\n", FLT_MAX);
   printf("The minimum value of float = %.10e\n", FLT_MIN);

   printf("The number of digits in the number = %.10e\n", FLT_MANT_DIG);
}
