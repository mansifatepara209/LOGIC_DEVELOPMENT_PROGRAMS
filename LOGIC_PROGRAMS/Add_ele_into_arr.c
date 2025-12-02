// Steps:
// Read the array size n and the array elements.
// Read the element to insert (x) and the position (pos).
// Shift elements from the end to pos one place to the right.
// Insert the new element at pos.
// Increment the array size (n++).
// Print the array.


#include <stdio.h>

int main() {
    int arr[100], n, x, pos;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
        return 1;
    }

    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = x;
    n++; 

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
