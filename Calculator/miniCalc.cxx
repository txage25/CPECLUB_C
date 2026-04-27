#include <stdio.h>

int main(void)
{
    double num1, num2, result;
    char op;   // to store +, -, *, /

    // Get input from user
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);     // space before %c is important

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Decide what to do based on operator
    if (op == '+')
    {
        result = num1 + num2;
        printf("Result = %.2f\n", result);
    }
    else if (op == '-')
    {
        result = num1 - num2;
        printf("Result = %.2f\n", result);
    }
    else if (op == '*')
    {
        result = num1 * num2;
        printf("Result = %.2f\n", result);
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            printf("Error: Cannot divide by zero!\n");
        }
        else
        {
            result = num1 / num2;
            printf("Result = %.2f\n", result);
        }
    }
    else
    {
        printf("Invalid operator! Please use +, -, *, or /\n");
    }

    return 0;
}