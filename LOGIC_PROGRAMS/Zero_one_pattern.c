//Zero_one_pattern

// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows for 0-1 pattern: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}