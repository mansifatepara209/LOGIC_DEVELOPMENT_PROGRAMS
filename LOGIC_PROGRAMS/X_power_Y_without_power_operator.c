//Calculate x^y without using power operator
//X_power_Y_without_power_operator

#include<stdio.h>

int main(){
    int x,y,result=1;
    printf("Enter base and exponent values: ");
    scanf("%d %d",&x,&y);
    for(int i=1;i<=y;i++){
        result = result * x;
    }
    printf("%d to the power %d is: %d\n",x,y,result);
}