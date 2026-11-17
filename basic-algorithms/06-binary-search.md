## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

The array is sorted, so I keep a window between left and right and check the middle element. If the middle is too small, the target must be on the right, so I move left past mid. If it is too big, I move right before mid. Each step throws away half of the window.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

I use left <= right so the last remaining element is still checked. I compute mid as left + (right - left) / 2 to avoid integer overflow. I move to mid + 1 or mid - 1, never mid, to avoid an infinite loop.
