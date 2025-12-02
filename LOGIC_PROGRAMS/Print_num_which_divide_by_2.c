//Print numbers divisible by 2 between two numbers
//Print_num_which_divide_by_2

#include<stdio.h>

int main(){
    int start,end;
    printf("Enter start and end values: ");
    scanf("%d %d",&start,&end);
    printf("Numbers divisible by 2 between %d and %d are:\n",start,end);
    for(int i=start;i<=end;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}