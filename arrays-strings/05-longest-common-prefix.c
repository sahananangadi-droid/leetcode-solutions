#include <stdio.h>
#include <stdlib.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    char *result = malloc(201 * sizeof(char));
    if (result == NULL)
        return NULL;

    int k = 0;

    for (int j = 0; j < 200; j++)
    {
        for (int i = 1; i < strsSize; i++)
        {
            if (strs[i][j] == '\0' || strs[i][j] != strs[0][j])
            {
                result[k] = '\0';
                return result;
            }
        }
        if (strs[0][j] == '\0')
        {
            break;
        }
        result[k] = strs[0][j];
        k++;
    }

    result[k] = '\0';
    return result;
}

int main(void)
{
    // Test 1: typical case
    char *a[] = {"flower", "flow", "flight"};
    char *r1 = longestCommonPrefix(a, 3);
    printf("Test 1: \"%s\" (expected \"fl\")\n", r1);
    free(r1);

    // Test 2: edge case (no common prefix)
    char *b[] = {"dog", "racecar", "car"};
    char *r2 = longestCommonPrefix(b, 3);
    printf("Test 2: \"%s\" (expected \"\")\n", r2);
    free(r2);

    // Test 3: edge case (single string)
    char *c[] = {"alone"};
    char *r3 = longestCommonPrefix(c, 1);
    printf("Test 3: \"%s\" (expected \"alone\")\n", r3);
    free(r3);

    return 0;
}