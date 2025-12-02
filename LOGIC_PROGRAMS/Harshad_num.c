//Check whether a number is a Harshad Number
//Harshad_num
// 18 -> 1+8=9 -> 18%9==0

#include<stdio.h>

int main(){
    int n,rem,sum=0;
    printf("Enter number to check harshad number: ");
    scanf("%d",&n);
    int n1 = n;

    for(int i=0;i<=n;i++){
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    if(n1%sum==0){
            printf("Greatee!! The number is harshad number..!!");
    }
    else{
            printf("Oopss!! The number is not harshad number..!!");
    }
}