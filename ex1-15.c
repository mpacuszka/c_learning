#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahrenheitToCelsius(float);

int main()
{
    printf("CELSIUS <->\tFAHRENHEIT\n");
    for (float fahr = LOWER; fahr <= UPPER; fahr += 20)
        printf(" %3.0f <->\t%6.2f\n", fahr, fahrenheitToCelsius(fahr));
}

float fahrenheitToCelsius(float fahr)
{

    return 5 * (fahr - 32) / 9;
}
