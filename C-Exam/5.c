#include <stdio.h>

#define SIZE 5

int main()
{
    int array1[SIZE], array2[SIZE], sum[SIZE];
    int *ptr1 = array1;
    int *ptr2 = array2;
    int *ptrSum = sum;

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", ptr1 + i);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", ptr2 + i);
    }

    for (int i = 0; i < SIZE; i++)
    {
        *(ptrSum + i) = *(ptr1 + i) + *(ptr2 + i);
    }

    printf("Sum of the two arrays:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(ptrSum + i));
    }
    printf("\n");

    return 0;
}
