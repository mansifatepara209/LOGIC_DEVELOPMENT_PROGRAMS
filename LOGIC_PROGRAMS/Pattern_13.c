// 5 6 7 8 9
// 4 5 6 7
// 3 4 5
// 2 3
// 1

#include <stdio.h>

void main()
{
    int i, j, temp, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--)
    {
        temp = i;
        for (j = 1; j <= i; j++)
        {
            printf("%d", temp);
            temp++;
        }
        printf("\n");
    }
}