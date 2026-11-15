#include <stdio.h>

int maxProfit(int *prices, int pricesSize)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        int profit = prices[i] - minPrice;

        if (profit > maxProfit)
        {
            maxProfit = profit;
        }

        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
    }
    return maxProfit;
}

int main(void)
{
    // Test 1: typical case
    int a[] = {7, 1, 5, 3, 6, 4};
    printf("Test 1: %d (expected 5)\n", maxProfit(a, 6));

    // Test 2: edge case (prices only go down)
    int b[] = {7, 6, 4, 3, 1};
    printf("Test 2: %d (expected 0)\n", maxProfit(b, 5));

    // Test 3: edge case (single day)
    int c[] = {5};
    printf("Test 3: %d (expected 0)\n", maxProfit(c, 1));

    return 0;
}