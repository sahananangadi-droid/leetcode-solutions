## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I use the first string as the reference. For each character position, I check that every other string has the same character there. I stop at the first mismatch or at the end of any string, and return the characters collected so far.

### Complexity

- Time: O(n·m), where n is the number of strings and m is the length of the shortest string
- Space: O(m) for the result buffer

### Notes

I check strs[i][j] == '\0' before comparing so I never read past the end of a shorter string. If there is no common prefix, the result is an empty string, not NULL.
