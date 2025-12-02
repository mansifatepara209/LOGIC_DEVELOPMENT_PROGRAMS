//find reverse order of a number and check palindrome.
//Palindrome_num

#include<stdio.h>

int main(){
    int n;
    for(int i=0;i<1;i++){
        int rev=0,rem;
        printf("Enter the number to check palindrome or not: ");
        scanf("%d",&n);
        int temp=n;
        while(n!=0){
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        if(temp==rev){
            printf("The number is palindrome\n");
        }
        else{
            printf("The number is not palindrome\n");
        }
    }
}