#include <stdio.h>

int main(void)
{
    double a, b, c, d, e, f;   // coefficients
    double D, Dx, Dy, x, y;    // determinants and solutions

    // Ask user for all six numbers
    printf("Enter a b c d e f : ");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    // Step 1: Calculate main determinant D
    D = (a * d) - (b * c);

    // Step 2: Check if D is zero
    if (D == 0)
    {
        printf("No unique solution exists.\n");
    }
    else
    {
        // Calculate Dx and Dy
        Dx = (e * d) - (b * f);
        Dy = (a * f) - (e * c);

        // Calculate x and y
        x = Dx / D;
        y = Dy / D;

        // Print results with 2 decimal places
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    }

    return 0;
}