// WAP to check whether number is present in array or not (using recursion only) and the function’s syntax
// is given below
// int isInArray(int a [], int m); Where int a [] is Array of integer and m is element to be searched.

#include <stdio.h>

int i = 0;
int size;
int isInArray(int a[], int m)
{
    if (i == size)
    {
        return 0;
    }
    if (a[i] == m){
        return 1;
    }
    i++;
    return isInArray(a, m);
}

int main()
{
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter %d elements: \n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);

    int m;
    printf("Enter number to search: ");
    scanf("%d", &m);

    int ans = isInArray(a, m);
    if (ans == 1)
    {
        printf("yess!! %d is present..!!", m);
    }
    else
    {
        printf("Noo!! %d is not present..!!", m);
    }

    return 0;
}