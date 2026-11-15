#include <stdio.h>
#include <string.h>

void reverseString(char *s, int sSize)
{
    int left = 0;
    int right = sSize - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main(void)
{
    // Test 1: typical case (odd length)
    char a[] = "hello";
    reverseString(a, (int)strlen(a));
    printf("Test 1: %s (expected olleh)\n", a);

    // Test 2: edge case (single character)
    char b[] = "a";
    reverseString(b, (int)strlen(b));
    printf("Test 2: %s (expected a)\n", b);

    return 0;
}