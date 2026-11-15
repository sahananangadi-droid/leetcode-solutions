## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used two nested loops. The outer loop picks a number and the inner loop checks every later number to see if the pair adds up to the target. When it finds a match, it stores both indices in a malloc'd array and returns it.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

I forgot that result[1] needs to be assigned separately, and that malloc needs sizeof(int), not sizeof(nums). A faster approach would use a hash map to get O(n), which I want to try next time.
