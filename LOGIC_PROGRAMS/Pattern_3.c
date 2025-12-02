//3. implement a pattern
// 	1
// 	2  3
// 	4  5  6
// 	7  8  9  10
//  11 12 13 14 15

#include<stdio.h>

int main(){
    int i, j, rows,temp=0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++) 
        {
            temp=temp+1;
            printf("%d  ",temp);
        }
        printf("\n");
    }
    return 0;
}

