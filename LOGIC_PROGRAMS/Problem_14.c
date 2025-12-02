//    1
//   212
//  32123
// 4321234
//  32123
//   212
//    1

#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // upper half
    for (i = 1; i <= rows; i++)
    {
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)//decending
        {
            printf("%d", j);
        }
        for (j = 2; j <= i; j++)//assending
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // lower half
    for (i = rows - 1; i >= 1; i--)
    {
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--) // decending
        {
            printf("%d", j);
        }
        for (j = 2; j <= i; j++) // assending
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
