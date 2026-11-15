#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char *s, char *t)
{
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++)
    {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    // Test 1: typical case (is an anagram)
    printf("Test 1: %d (expected 1)\n", isAnagram("anagram", "nagaram"));

    // Test 2: edge case (same letters, different counts)
    printf("Test 2: %d (expected 0)\n", isAnagram("rat", "car"));

    return 0;
}