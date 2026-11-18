## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I use a stack, which works like a pile of plates where the last one added is the first one removed. When I see an opening bracket, I push it. When I see a closing bracket, I check the top of the stack: it must be the matching opener, and then I pop it. At the end the stack must be empty.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

There are three ways to fail: a closer with nothing open, a closer that doesn't match the top, and openers left over at the end. Counting brackets is not enough, because "([)]" has one of each type but the order is wrong. I check top == -1 before reading the stack so I never read outside the array.
