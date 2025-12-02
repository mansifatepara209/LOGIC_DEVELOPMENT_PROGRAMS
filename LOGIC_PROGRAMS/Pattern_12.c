// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <stdio.h>

void main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}