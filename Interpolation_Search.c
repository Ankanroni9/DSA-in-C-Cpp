#include <stdio.h>

int interpolationSearch(int arr[], int low, int high, int x)
{
    int pos;
    if (low <= high && x >= arr[low] && x <= arr[high])
    {
        pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]));

        // Condition of target found
        if (arr[pos] == x)
            return pos;

        // If x is larger, x is in right sub array
        if (arr[pos] < x)
            return interpolationSearch(arr, pos + 1, high, x);

        // If x is smaller, x is in left sub array
        if (arr[pos] > x)
            return interpolationSearch(arr, low, pos - 1, x);
    }
    return -1;
}

int main()
{
    int arr[] = {23, 10, 11, 65};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 18; // Element to be searched
    int index = interpolationSearch(arr, 0, n - 1, x);

    // If element was found
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");
    return 0;
}
