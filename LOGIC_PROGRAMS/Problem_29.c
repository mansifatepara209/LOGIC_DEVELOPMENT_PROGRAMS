// Given an integer n, return the least number of perfect square numbers that sum to n.
// Input: n = 12 Output: 3 Explanation: 12 = 4 + 4 + 4.
// Input: n = 13 Output: 2 Explanation: 13 = 4 + 9.

#include <stdio.h>

void main()
{
    int i, n = 12;
    // printf("Enter number: ");
    // scanf("%d",&n);

    for (int i = 1; i * i <= n; i++)
    {
        printf("%d", i);
    }
}





































































// #include <stdio.h>
// #include <math.h>
// #include <limits.h>

// int minSquares(int n) {
//     if (n == 0)
//         return 0;

//     int min = INT_MAX;
//     for (int i = 1; i * i <= n; i++) {
//         int square = i * i;
//         int count = 1 + minSquares(n - square); // use one square
//         if (count < min)
//             min = count;
//     }

//     return min;
// }

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     printf("Least number of perfect squares = %d\n", minSquares(n));
//     return 0;
// }
