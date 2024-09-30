#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int key)
{
    if (low > high)
    {
        return -1; // Key not found
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
    {
        return mid; // Key found at mid index
    }
    else if (arr[mid] < key)
    {
        return binarySearchRecursive(arr, mid + 1, high, key); // Search right half
    }
    else
    {
        return binarySearchRecursive(arr, low, mid - 1, key); // Search left half
    }
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int index = binarySearchRecursive(arr, 0, n - 1, key);

    if (index != -1)
    {
        printf("Element found at index %d\n", index);
    }
    else
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}
