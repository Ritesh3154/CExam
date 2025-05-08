#include <stdio.h>

int main()
{
    int i, j;
    int n = 10;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }

        for (j = n - i; j >= 6; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
