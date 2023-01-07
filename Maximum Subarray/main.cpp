#include <iostream>
#include <string>

int max(int a, int b)
{
    return a >= b ? a : b;
}

int maxSubArray(int *nums, int numsSize)
{
    int maxSoFar = nums[0], maxEndingHere = nums[0];

    for (int i = 1; i < numsSize; i++)
    {
        maxEndingHere = max(maxEndingHere + nums[i], nums[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main()
{
    int input[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int output = maxSubArray(input, 9);

    printf("maxSubArray=%d", output);

    return 0;
}