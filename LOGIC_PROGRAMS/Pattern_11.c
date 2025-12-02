// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include<stdio.h>

void main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--)
    {
        for (j =i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}