#include <stdio.h>
#include <math.h>

int main()
{
    int num, sq, div, temp, count = 0, last_dig;

    printf("Enter number to check automorphic: ");
    scanf("%d", &num);

    sq = num * num;
    temp = num;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    div = pow(10, count);
    last_dig = sq % div;

    if (last_dig == num)
    {
        printf("Yes, Automorphic Number");
    }
    else
    {
        printf("No, Not an Automorphic Number");
    }

    return 0;
}
