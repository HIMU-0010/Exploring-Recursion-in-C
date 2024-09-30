#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1; // Base case: Factorial of 0 is 1
    }
    else
    {
        return n * factorial(n - 1); // Recursive step
    }
}

int main()
{
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        int fact = factorial(num);
        printf("Factorial of %d is %d\n", num, fact);
    }

    return 0;
}
