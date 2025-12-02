//Perform multiplication without using * operator
//mul_without_star

#include<stdio.h>

int main(){
    int a,b,product=0;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){
        product = product + a;
    }
    printf("Product of %d and %d is: %d\n",a,b,product);
}