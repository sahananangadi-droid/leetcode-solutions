#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *result = (int *)malloc(2 * sizeof(int));
    if (result == NULL)
    {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return result;
}

int main(void)
{
    int size;

    // Test 1: typical case
    int a[] = {2, 7, 11, 15};
    int *r1 = twoSum(a, 4, 9, &size);
    printf("Test 1: [%d, %d] (expected [0, 1])\n", r1[0], r1[1]);
    free(r1);

    // Test 2: edge case (duplicate values)
    int b[] = {3, 3};
    int *r2 = twoSum(b, 2, 6, &size);
    printf("Test 2: [%d, %d] (expected [0, 1])\n", r2[0], r2[1]);
    free(r2);

    return 0;
}