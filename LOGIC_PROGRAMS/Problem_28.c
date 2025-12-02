// //Write a program that should decode the given pattern and print the resulting expanded string.
// Input: 2a3bc4dE5F2G7H
// Output: aabbbcddddEFFFFFGGHHHHHHH

#include <stdio.h>
#include <ctype.h>

void main()
{
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int i = 0;
    while (s[i] != '\0')
    {
        int count = 0;
        while (isdigit(s[i]))
        {
            count = count * 10 + (s[i] - '0');
            i++;
        }
        if (count == 0)
        {
            count = 1;
        }

        for (int j = 0; j < count; j++)
        {
            printf("%c", s[i]);
        }
        i++;
    }
}