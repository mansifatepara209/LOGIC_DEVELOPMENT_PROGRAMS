//Strong_num

#include<stdio.h>

int main(){
    int n,fact,sum=0,rem;
    printf("Enter the number to check strong number or not: ");
    scanf("%d",&n);
    int n1 = n; // where n is not update so we can store n in another variable..!!
    while(n!=0){
        rem=n%10;
        fact=1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==n1){
        printf("The number is a strong number\n");
    }
    else{
        printf("The number is not a strong number\n");
    }
}   