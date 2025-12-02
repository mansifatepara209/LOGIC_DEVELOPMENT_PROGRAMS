#include <stdio.h>

int main()
{
    int n, flag = 0;
    printf("Enter number to check ugly: ");
    scanf("%d", &n);

    while (n != 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else if (n % 3 == 0)
            n = n / 3;
        else if (n % 5 == 0)
            n = n / 5;
        else
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Ugly");
    else
        printf("Not ugly");

    return 0;
}
