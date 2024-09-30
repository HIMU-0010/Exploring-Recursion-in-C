#include <stdio.h>

int reverseNumber(int num)
{
    static int reversed = 0;
    if (num == 0)
    {
        return reversed;
    }
    else
    {
        reversed = reversed * 10 + (num % 10);
        return reverseNumber(num / 10);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reversedNum = reverseNumber(num);
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
