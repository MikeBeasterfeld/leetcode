#include <stdlib.h>
#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    printf("nums: ");
    for (int i = 0; i < numsSize; i++)
    {
        printf("%i ", nums[i]);
    }
    printf("\n");
    printf("numsSize %i\n", numsSize);
    printf("target %i\n", target);
    printf("returnSize %i\n", *returnSize);
    *returnSize = 2;
    int *returnValue = (int *)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            printf("---- i: %i j: %i\n", i, j);
            if (nums[i] + nums[j] == target)
            {
                returnValue[0] = i;
                returnValue[1] = j;
                return returnValue;
            }
        }
    }

    return returnValue;
}

int main()
{
    int nums[4] = {2, 7, 11, 15};
    int target = 9;
    int returnSize = 0;

    int *result = twoSum(nums, 4, target, &returnSize);

    printf("Result: %i %i\n", result[0], result[1]);

    int nums2[4] = {3, 2, 4};
    int target2 = 6;
    int returnSize2 = 0;

    int *result2 = twoSum(nums2, 4, target2, &returnSize2);

    printf("Result: %i %i\n", result2[0], result2[1]);

    return 0;
}
