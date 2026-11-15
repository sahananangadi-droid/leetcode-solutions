## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I go through the prices once while remembering the lowest price seen so far. On each day I calculate the profit if I sold today, and keep the largest profit found. This avoids checking every pair of days.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

maxProfit starts at 0 so that when prices only fall, the answer is 0. A brute-force approach with two nested loops would be O(n²), which is too slow for large inputs.
