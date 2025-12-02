//sum of 1 to 10 numbers

#include<stdio.h>

int main(){
    int n=10,sum = 0;
    for(int i=1;i<n;i++){
        sum = sum+i;
    }
    printf("Sum of 10 numbers is: %d\n",sum);
}