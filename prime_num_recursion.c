#include <stdio.h>

int isPrime(int num, int i)
{
    if (i == 1)
    {
        return 1; // If it reaches here, the number is prime
    }
    else
    {
        if (num % i == 0)
        {
            return 0; // Not prime if divisible by any number other than 1 and itself
        }
        else
        {
            return isPrime(num, i - 1); // Continue checking divisibility
        }
    }
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num, num / 2) == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
