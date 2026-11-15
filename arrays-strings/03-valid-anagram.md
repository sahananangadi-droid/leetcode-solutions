## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of size 26, one slot per letter. I add one for each letter in s and subtract one for each letter in t. If every slot ends at zero, the two strings have the same letters in the same counts, so they are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

My first version used i < s[i] as the loop condition, which compared the index to the character's ASCII value. The correct condition is s[i] != '\0'. The array is fixed at 26, so space stays constant.
