## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used two pointers, one at the start and one at the end of the array. I swap the characters they point to, then move left forward and right backward until they meet. This reverses the array in place without extra memory.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The loop condition is left < right, so the middle character of an odd-length string stays untouched. A single-character input works because the loop never runs. I need a temp variable for the swap so I don't lose the original value.
