#include <stdio.h>

int main()
{
    int decimal, quotient, remainder;
    int octal[20];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    quotient = decimal;

    while (quotient != 0)
    {
        remainder = quotient % 8;
        octal[i] = remainder;
        quotient = quotient / 8;
        i++;
    }

    printf("Octal number is: ");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n");

    return 0;
}
