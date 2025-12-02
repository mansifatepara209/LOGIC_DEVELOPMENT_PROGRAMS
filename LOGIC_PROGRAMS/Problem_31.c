// Given a string S of length n, the task is to find the earliest repeated character in it. The earliest repeated
// character means, the character that occurs more than once and whose second occurrence has the
// smallest index.
// Input: s = "geeksforgeeks"
// Output: e
// Explanation: e is the first element that repeats

#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    int occ = INT_MAX;

    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = i + 1; j < strlen(s); j++)
        {
            if (s[i] == s[j])
            {
                if (j < occ)
                {
                    occ = j;
                }
            }
        }
    }

    if (occ != INT_MAX)
        printf("First repeating character: %c\n", s[occ]);
    else
        printf("No repeating characters found.\n");

    return 0;
}