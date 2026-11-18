## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I use two pointers, read and write. Read walks through every element. Whenever it finds a non-zero value, I copy it to the write position and move write forward. After that, everything from write to the end is filled with zeroes. This keeps the non-zero numbers in their original order and works in the same array.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

write can never get ahead of read, so I never overwrite a number I haven't looked at yet. I don't create a second array, because the problem asks for an in-place solution.
