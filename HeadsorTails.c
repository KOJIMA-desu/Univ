#include <stdio.h>
#include <stdlib.h>

int Uniform()
{
    return ((double)rand() + 1.0) / ((double)RAND_MAX + 2.0);
}

int main()
{
    int Heads = 0, Tails = 0;
    int a;
    char a[10];

    printf("Who are you?\n>");
    scanf("%s", a);
    printf("Hello, %s", a);
    printf("tossing coin...\n");
    for (int i = 1; i < 4; i++)
    {
        printf("round %d:", i);
        if (Uniform() % 2 == 0)
        {
            printf("Heads\n");
            Heads++;
        }
        else
        {
            printf("Tails\n");
            Tails++;
        }
    }
    printf("Heads: %d, Tails: %d\n", Heads, Tails);
    return 0;
}