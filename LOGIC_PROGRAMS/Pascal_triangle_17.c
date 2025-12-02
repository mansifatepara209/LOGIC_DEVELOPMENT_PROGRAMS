#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int a[rows][rows];

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
