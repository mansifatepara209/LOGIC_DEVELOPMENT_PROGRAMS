// * * * * * * *
//   *       *
//     *   *
//       *
//     *   *
//   *       *
// * * * * * * *

#include <stdio.h>

void main()
{
    int i, j, n;//n=7
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j || j == (n - i + 1))
            {
                printf("* ");
            }
            else if (i == 1 || i == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}