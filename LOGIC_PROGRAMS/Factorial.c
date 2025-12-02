//Find factorial of a given number (n!)
#include<stdio.h>

int main(){
    int n,fact=1;
    printf("Enter a number to find factorial: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("factorial is: %d\n",fact);
}