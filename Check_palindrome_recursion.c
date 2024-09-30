#include <stdio.h>
#include <string.h>


int isPalindrome(char *str, int start, int end)
{
    if (start >= end)
    {
        return 1; // It's a palindrome if the start index crosses or is equal to the end index
    }
    if (str[start] != str[end])
    {
        return 0; // Not a palindrome if characters don't match
    }
    return isPalindrome(str, start + 1, end - 1); // Recursive call
}

int main()
{
    char str[20];
    printf("Enter a string: \0");
    gets(str);

    int len = strlen(str);
    if (isPalindrome(str, 0, len - 1))
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
