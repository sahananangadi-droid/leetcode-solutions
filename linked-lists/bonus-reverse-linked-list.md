## Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

I walk through the list with three pointers: prev, curr and next. For each node I first save the next node, then flip the node's arrow to point backward at prev, then slide prev and curr forward. When curr runs off the end, prev is the new head.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I must save curr->next before flipping the arrow, or I lose the rest of the list. I return prev, not head or curr: the old head is now the last node, and curr is NULL at the end. The empty list works because the loop never runs and prev stays NULL.
