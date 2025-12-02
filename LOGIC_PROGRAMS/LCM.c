//Find the LCM (Least Common Multiple) of two numbers
//LCM

#include<stdio.h>

int main(){
    int a,b,max,lcm;
    printf("Enter two numbers to find their LCM: ");
    scanf("%d %d",&a,&b);
    max = (a>b) ? a : b;
    for(int i=max; ;i++){
        if(i%a==0 && i%b==0){
            lcm = i;
            break;
        }
    }
    printf("The LCM(Least Common Multiple of %d and %d is: %d\n",a,b,lcm);
}