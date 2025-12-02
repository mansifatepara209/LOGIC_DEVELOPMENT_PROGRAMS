// Take an Input in the form of Binary String that contains only 0’s and 1’s and convert this number into
// integer.
// Input: 101.110
// Output: 5.75

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char binary[50];
    printf("Enter a binary string: ");
    scanf("%s", binary);

    double decimal = 0.0;
    int i, pointIndex = -1;
    int len = strlen(binary);

    for (i = 0; i < len; i++)
    {
        if (binary[i] == '.')
        {
            pointIndex = i;
            break;
        }
    }

    int power = 0;
    int start = (pointIndex == -1) ? len - 1 : pointIndex - 1;

    for (i = start; i >= 0; i--)
    {
        if (binary[i] == '1')
            decimal += pow(2, power);
        power++;
    }

    if (pointIndex != -1)
    {
        double fracPower = 0.5;
        for (i = pointIndex + 1; i < len; i++)
        {
            if (binary[i] == '1')
                decimal += fracPower;
            fracPower /= 2;
        }
    }

    printf("Decimal Equivalent: %.3f\n", decimal);
    return 0;
}