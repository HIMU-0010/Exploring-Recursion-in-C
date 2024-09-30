#include <stdio.h>

int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0; // Base case: If the number is 0, the sum is 0
    }
    else
    {
        return (num % 10) + sumOfDigits(num / 10); // Recursive step
    }
}

int main()
{
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid input. Enter a non-negative integer.\n");
    }
    else
    {
        int sum = sumOfDigits(num);
        printf("Sum of digits of %d is %d\n", num, sum);
    }

    return 0;
}
