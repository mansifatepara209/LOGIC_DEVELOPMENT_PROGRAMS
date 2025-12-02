#include <stdio.h>

void main()
{
    int n=14, flag = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else if (
            n % 3 == 0)
        {
            n=n/3;
        }
        else if (n % 5 == 0)
        {
            n=n/5;
        }
        else
        {
            flag=1;
        }
    }
    if(flag==0){
        printf("Ugly");
    }
    else{
        printf("not ugly");
    }
}