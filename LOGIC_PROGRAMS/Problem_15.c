// 1
// 1 2 1
// 1 * 3 * 1
// 1 * * 4 * * 1
// 1 * * * 5 * * * 1
// 1 * * * * 6 * * * * 1

#include <stdio.h>

void main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        printf("1");
        if (i == 1)
        {
            printf("\n");
            continue;
        }
        for (j = 1; j <= i - 2; j++)
        {
            printf(" *");
        }
        printf(" %d", i);
        for (j = 1; j <= i - 2; j++)
        {
            printf(" *");
        }
        printf(" 1\n");
    }
}