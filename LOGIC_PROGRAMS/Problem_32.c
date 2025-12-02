// Given two strings s1 and s2 consisting of lowercase characters, the task is to check whether the two given
// strings are anagrams of each other or not. An anagram of a string is another string that contains the same
// characters, only the order of characters can be different.
// Input: s1 = “geeks” s2 = “kseeg”
// Output: true
// Explanation: Both the strings have the same characters with same frequency. So, they are anagrams.

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2))
    {
        printf("False!!");
        return 0;
    }
    for (i = 0; s1[i] != '\0'; i++)
    {
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("False!!");
            return 0;
        }
    }
    printf("True!!");
    return 0;
}