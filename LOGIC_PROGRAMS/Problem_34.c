// Given an array of positive integers arr[] of size n, the task is to find the second largest distinct element in
// the array.
// Note: If the second largest element does not exist, return -1.
// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.
// Input: arr[] = [10, 10, 10]
// Output: -1
// Explanation: The largest element of the array is 10 there is no second largest element.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int first = -1, second = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < first && arr[i] > second)
        {
            second = arr[i];
        }
    }
    if (second == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("In the array second largest is %d", second);
    }
}