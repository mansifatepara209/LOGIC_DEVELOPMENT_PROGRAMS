//Print sum of digits of a given number
//Sum_of_digits_given_num

#include<stdio.h>

int main(){
    int n,rem,sum=0;
    printf("Enter a number to find sum of its digits: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        while(n!=0){
            rem = n%10;
            n = n/10;
            sum = sum + rem;
        }
        printf("Sum of digits is: %d\n",sum);
    }
}