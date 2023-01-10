#include <iostream>

int *twoSum(int *nums, int numsSize, int target)
{
    int *result = (int *)malloc(2 * (sizeof(int)));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
            }
        }
    }

    return result;
}

int main()
{
    int input[4] = {2, 7, 11, 15};

    int output = *twoSum(input, 4, 9);

    printf("twoSum=%d", output);

    return 0;
}