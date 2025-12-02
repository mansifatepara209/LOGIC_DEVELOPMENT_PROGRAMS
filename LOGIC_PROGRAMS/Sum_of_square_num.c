//Print sum series 1 + 4 + 9 + 16 + … + n
//Sum_of_square_num


#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a number where we stop our codition: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum = sum + (i*i);
    }
    printf("Sum of square number is: %d\n",sum);
}