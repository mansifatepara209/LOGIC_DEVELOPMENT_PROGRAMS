//Find factors of a given number
//Factors

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number to find its factors: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("Factor of %d is: %d\n",i);
        }
    }
}
