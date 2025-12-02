//Find the GCD (Greatest Common Divisor) of two numbers
//GCD

#include<stdio.h>

int main(){
    int a,b,gcd,min;
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d",&a,&b);
    min = a>b ? b: a;
    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("The GCD(Greatest Common Divisor) of %d and %d is: %d\n",a,b,gcd);
}