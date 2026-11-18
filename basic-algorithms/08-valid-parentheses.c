#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char *s)
{
    int n = strlen(s);

    if (n % 2 != 0)
        return false; // odd length can never be paired

    char stack[10001]; // our stack (array)
    int top = -1;      // -1 means the stack is empty

    for (int i = 0; i < n; i++)
    {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[')
        {
            top++;
            stack[top] = c; // push
        }
        else
        {
            if (top == -1)
                return false; // closer with nothing open

            char open = stack[top]; // look at the top
            top--;                  // pop

            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '['))
            {
                return false; // wrong type of partner
            }
        }
    }

    return top == -1; // true only if nothing is left open
}

void check(int num, char *s, bool expected)
{
    bool got = isValid(s);
    printf("Test %d: \"%s\" -> %s (expected %s)\n",
           num, s, got ? "true" : "false", expected ? "true" : "false");
}

int main(void)
{
    // Test 1: typical case
    check(1, "()[]{}", true);

    // Test 2: nested
    check(2, "([])", true);

    // Test 3: wrong type
    check(3, "(]", false);

    // Test 4: wrong order
    check(4, "([)]", false);

    // Test 5: edge case (opener never closed)
    check(5, "(()", false);

    // Test 6: edge case (closer with nothing open)
    check(6, "))", false);

    return 0;
}