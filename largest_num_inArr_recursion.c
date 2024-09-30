#include <stdio.h>

int findLargest(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    else
    {
        int largestSoFar = findLargest(arr, n - 1);
        return (arr[n - 1] > largestSoFar) ? arr[n - 1] : largestSoFar;
    }
}

int main()
{
    int arr[] = {10, 5, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, n);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
