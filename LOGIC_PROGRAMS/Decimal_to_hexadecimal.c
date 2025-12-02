#include<stdio.h>

int main(){
    int dec;
    printf("Enter decimal number: ");
    scanf("%d",&dec);
    int hex[100];

    int i=0;
    while(dec!=0){
        hex[i++]=dec%16;
        dec/=16;
    }
    printf("Equivalant Hexadecimal is: ");
    for(int j=i-1;j>=0;j--){
        if(hex[j]>9){
            printf("%c",(55+hex[j]));
        }
        else{
            printf("%d",hex[j]);
        }
    }
}