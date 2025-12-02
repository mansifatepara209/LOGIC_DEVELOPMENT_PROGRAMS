#include <stdio.h>

int main()
{
    int n, temp = 0;

    printf("Enter number to check pronic: ");
    scanf("%d", &n);

    for (int i = 0; i * (i + 1) <= n; i++)
    {
        if (i * (i + 1) == n)
        {
            temp = 1;
            break;
        }
    }

    if (temp == 1)
    {
        printf("Pronic Number");
    }
    else
    {
        printf("Not a Pronic Number");
    }

    return 0;
}