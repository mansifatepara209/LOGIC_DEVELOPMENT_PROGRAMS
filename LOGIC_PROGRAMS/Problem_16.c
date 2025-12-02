// *       * * * * *
// *       *
// *       *
// *       *
// * * * * * * * * *
//         *       *
//         *       *
//         *       *
// * * * * *       *

#include <stdio.h>

int main() {
    int n;
    printf("Enter number(must be odd): ");
    scanf("%d",&n);
    int mid = n/2 + 1;
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 && j >= mid)            
                printf("* ");
            else if (j == 1 && i <= mid)       
                printf("* ");
            else if (i == mid)                 
                printf("* ");
            else if (j == n && i >= mid)       
                printf("* ");
            else if (i == n && j <= mid)       
                printf("* ");
            else if (j == mid && i >= mid)     
                printf("* ");
            else if(j==mid && i<mid)          
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
