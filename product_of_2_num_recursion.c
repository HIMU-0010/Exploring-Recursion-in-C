#include <stdio.h>

int product(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return a + product(a, b - 1);
    }
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = product(num1, num2);
    printf("Product of %d and %d is %d\n", num1, num2, result);

    return 0;
}
