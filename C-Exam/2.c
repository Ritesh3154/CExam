#include <stdio.h>

int main()
{
    int number;

    printf("Enter 3 positive number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999)
    {
        printf("Please enter 3 positive integer.\n");
        return 1;
    }

    int lastDigit = number % 10;
    int firstDigit = number / 100;

    int sum = firstDigit + lastDigit;

    printf("Sum of the first and last digit: %d\n", sum);

    return 0;
}
