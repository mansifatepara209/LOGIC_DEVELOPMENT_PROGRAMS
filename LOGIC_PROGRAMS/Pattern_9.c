// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include <stdio.h>

int main()
{
    int i, j, k, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--)
    {
        for (k = i; k < rows; k++)
        {
            printf(" ");
        }
        for (j = 1; j < 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}