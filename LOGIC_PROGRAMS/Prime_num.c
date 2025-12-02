//Check whether a number is Prime or Not.
//Prime_num

#include<stdio.h>

int main(){
    int n,flag=0;
    printf("Enter the number to check prime or not: ");
    scanf("%d",&n);

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("The number is prime\n");
    }
    else{
        printf("The number is not prime\n");
    }
}