#include <stdio.h>

#define MAX_SIZE 50

int main()
{
    int c, nw, nc, state, max_word;
    int histogram[MAX_SIZE];
    c, nw, nc, max_word = 0;
    state = 0;

    size_t s_array = sizeof(histogram) / sizeof(histogram[0]);
    for (int i = 0; i < s_array; ++i)
        histogram[i] = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;

        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = 0;
            histogram[nc]++;
            if (nc > max_word)
                max_word = nc;
            nc = 0;
        }
        else if (!state)
        {
            state = 1;
        }
    }
    printf("\n ================= Horizontal HISTOGRAM =================\n");

    for (int i = 1; i <= max_word; ++i)
    {
        printf("%3d: ", i);
        for (int j = 0; j < histogram[i]; ++j)
        {
            printf("-");
        }
        printf("\n");
    }
    printf("\n ================= Vertical HISTOGRAM =================\n");

    for (int i = 1; i <= max_word; ++i)
    {
        printf("%3d", i);
    }
    printf("\n");

    for (int i = 1; i <= max_word; ++i)
    {
        for (int j = 1; j <= max_word; ++j)
            printf("%3c", histogram[j] >= i ? '#' : ' ');
        printf("\n");
    }

    return 0;
}
