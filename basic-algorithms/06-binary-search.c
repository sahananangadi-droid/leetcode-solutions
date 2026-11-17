#include <stdio.h>

int search(int *nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main(void)
{
    int a[] = {-1, 0, 3, 5, 9, 12};

    // Test 1: typical case (target found)
    printf("Test 1: %d (expected 4)\n", search(a, 6, 9));

    // Test 2: edge case (target not in array)
    printf("Test 2: %d (expected -1)\n", search(a, 6, 2));

    // Test 3: edge case (target is the first element)
    printf("Test 3: %d (expected 0)\n", search(a, 6, -1));

    // Test 4: edge case (target is the last element)
    printf("Test 4: %d (expected 5)\n", search(a, 6, 12));

    // Test 5: edge case (single element)
    int b[] = {5};
    printf("Test 5: %d (expected 0)\n", search(b, 1, 5));

    return 0;
}