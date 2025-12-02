//Check whether a number is a Perfect Number
//Perfect_num

#include<stdio.h>

int main(){
    int n,sum = 0;
    printf("Enter a number to find the number is perfect: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(sum==n){
            printf("The given number is perfect...!!");
    }
    else{
            printf("The given number is not perfect...!!");
    }
}