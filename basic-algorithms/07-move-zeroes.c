#include <stdio.h>

void moveZeroes(int *nums, int numsSize)
{
    int write = 0;

    // Pass 1: pack non-zeroes to the front
    for (int read = 0; read < numsSize; read++)
    {
        if (nums[read] != 0)
        {
            nums[write] = nums[read];
            write++;
        }
    }

    // Pass 2: fill the rest with zeroes
    while (write < numsSize)
    {
        nums[write] = 0;
        write++;
    }
}

void printArray(int *nums, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d", nums[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("]");
}

int main(void)
{
    // Test 1: typical case
    int a[] = {0, 1, 0, 3, 12};
    moveZeroes(a, 5);
    printf("Test 1: ");
    printArray(a, 5);
    printf(" (expected [1, 3, 12, 0, 0])\n");

    // Test 2: edge case (single zero)
    int b[] = {0};
    moveZeroes(b, 1);
    printf("Test 2: ");
    printArray(b, 1);
    printf(" (expected [0])\n");

    // Test 3: edge case (no zeroes)
    int c[] = {1, 2, 3};
    moveZeroes(c, 3);
    printf("Test 3: ");
    printArray(c, 3);
    printf(" (expected [1, 2, 3])\n");

    // Test 4: edge case (all zeroes)
    int d[] = {0, 0, 0};
    moveZeroes(d, 3);
    printf("Test 4: ");
    printArray(d, 3);
    printf(" (expected [0, 0, 0])\n");

    return 0;
}