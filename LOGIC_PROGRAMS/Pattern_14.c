// *           *
//   *       *
// *   *   *   *
//   *   *   *
// *   *   *   *
//   *       *
// *           *

#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd number of rows (e.g. 7): ");
    scanf("%d", &n);

    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n * 2 - 1; j++) {
            if (i == 1 && (j == 1 || j == n * 2 - 1))
                printf("*");
            else if (i == 2 && (j == 3 || j == n * 2 - 3))
                printf("*");
            else if ((i == 3 || i == n - 2) && (j == 1 || j == 5 || j == 9 || j == 13))
                printf("*");
            else if (i == 4 && (j == 3 || j == 7 || j == 11))
                printf("*");
            else if (i == n - 1 && (j == 3 || j == n * 2 - 3))
                printf("*");
            else if (i == n && (j == 1 || j == n * 2 - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
