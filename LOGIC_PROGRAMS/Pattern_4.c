// 4. implement a pattern
// 	* * * *
// 	*     *
// 	*     *
// 	* * * *

#include <stdio.h>

int main()
{
    int i, j, k, rows;
    // printf("Enter number of rows: ");
    // scanf("%d\n", &rows);

    for (i = 1; i <= rows; i++)
    {
        printf("\n");
        for (j = 1; j <= 4; j++)
        {
            if(i==1 || j==1 || i==4 || j==4){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
}