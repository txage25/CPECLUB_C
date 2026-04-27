#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter any whole number: ");
    scanf("%d", &number);

    // Check if number is even or odd using modulo (%)
    if (number % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}