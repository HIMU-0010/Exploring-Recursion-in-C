#include <stdio.h>

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1; // Base case: Any number raised to the power 0 is 1
    }
    else
    {
        return base * power(base, exponent - 1); // Recursive step
    }
}

int main()
{
    int base, exponent;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);
    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}
