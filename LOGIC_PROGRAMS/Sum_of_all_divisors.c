//Find the sum of all divisors of a number
//Sum_of_all_divisors

#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a number to find the sum of its divisors: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    printf("The sum of all divisors of %d is: %d\n",n,sum);
}