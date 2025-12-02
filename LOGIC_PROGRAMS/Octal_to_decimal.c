// Octal_to_decimal

#include <stdio.h>
#include <math.h>

int main()
{
    int num, rem = 0, power = 0, dec = 0;

    printf("Enter a octal number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        dec += rem * (pow(8, power++));
        num /= 10;
    }
    printf("Decimal number is: %d", dec);
}