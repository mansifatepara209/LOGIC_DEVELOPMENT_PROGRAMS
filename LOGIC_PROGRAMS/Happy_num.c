#include <stdio.h>

int main()
{
    int num, sum_of_squares, digit, sq;

    printf("Enter number to check happy: ");
    scanf("%d", &num);

    while (num != 1 && num != 4)
    {
        sum_of_squares = 0;
        while (num > 0)
        {
            digit = num % 10;
            sq = digit * digit;
            sum_of_squares += sq;
            num = num / 10;
        }
        num = sum_of_squares;
    }
    if (num == 1)
    {
        printf("Happy Number");
    }
    else
    {
        printf("Unhappy Number");
    }

    return 0;
}