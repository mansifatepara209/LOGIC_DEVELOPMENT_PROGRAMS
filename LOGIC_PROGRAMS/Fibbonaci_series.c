//Print the Fibonacci Series
//Fibbonaci_series

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d",&n);
    int t1=0,t2=1,nextTerm;
    printf("Fibonacci Series: \n");
    for(int i=1;i<=n;i++){
        printf("%d + ",t1);
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
}