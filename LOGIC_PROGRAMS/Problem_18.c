// Given two integer arrays nums1 and nums2, return an array of their intersection.  
// Each element in the result must appear as many times as it shows in both arrays and you may return the 
// result in sorted order

#include<stdio.h>

void main(){
    int n1[100],n2[100],intersect[100];
    int a,b;

    printf("Enter the array1 size: ");
    scanf("%d",&a);
    printf("enter element of the array: ");
    for(int i=0;i<=a;i++){
        scanf("%d",& n1[i]);
    }

    printf("Enter the array1 size: ");
    scanf("%d",&b);
    printf("enter element of the array: ");
    for(int i=0;i<=b;i++){
        scanf("%d",& n2[i]);
    }


}