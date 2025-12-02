//Print digits of a number in reverse order
//Digit_in_reverse

#include<stdio.h>

int main(){
    int n,rem;
    printf("Enter a number to reverse its digits: ");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        n = n/10;
        printf("Reversed number is: %d\n",rem);
    }   
}