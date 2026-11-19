#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;

    while (curr != NULL)
    {
        struct ListNode *next = curr->next; // 1. save the next node
        curr->next = prev;                  // 2. flip the arrow backward
        prev = curr;                        // 3. move prev forward
        curr = next;                        // 4. move curr forward
    }

    return prev; // prev is the new head
}

// Helper: build a list from an array
struct ListNode *buildList(int *arr, int size)
{
    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;
    for (int i = 0; i < size; i++)
    {
        struct ListNode *node = malloc(sizeof(struct ListNode));
        node->val = arr[i];
        node->next = NULL;
        if (head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
    }
    return head;
}

// Helper: print a list like [1, 2, 3]
void printList(struct ListNode *head)
{
    printf("[");
    while (head != NULL)
    {
        printf("%d", head->val);
        if (head->next != NULL)
            printf(", ");
        head = head->next;
    }
    printf("]");
}

// Helper: free every node
void freeList(struct ListNode *head)
{
    while (head != NULL)
    {
        struct ListNode *next = head->next;
        free(head);
        head = next;
    }
}

int main(void)
{
    // Test 1: typical case
    int a[] = {1, 2, 3, 4, 5};
    struct ListNode *l1 = reverseList(buildList(a, 5));
    printf("Test 1: ");
    printList(l1);
    printf(" (expected [5, 4, 3, 2, 1])\n");
    freeList(l1);

    // Test 2: two nodes
    int b[] = {1, 2};
    struct ListNode *l2 = reverseList(buildList(b, 2));
    printf("Test 2: ");
    printList(l2);
    printf(" (expected [2, 1])\n");
    freeList(l2);

    // Test 3: edge case (empty list)
    struct ListNode *l3 = reverseList(NULL);
    printf("Test 3: ");
    printList(l3);
    printf(" (expected [])\n");

    // Test 4: edge case (single node)
    int c[] = {7};
    struct ListNode *l4 = reverseList(buildList(c, 1));
    printf("Test 4: ");
    printList(l4);
    printf(" (expected [7])\n");
    freeList(l4);

    return 0;
}