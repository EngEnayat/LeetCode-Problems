#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // printf("%d %d\n", nums[0], nums[1]);
    int final;
    int* result = (int*) malloc(2 * sizeof(int));
    for(int i=0; i<numsSize;i++)
    {
        for(int j=i+1; j< numsSize;j++)
        {
            if(i==j) continue;
            if( (nums[i] + nums[j]) == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                break;
                // printf("%d %d", returnSize[0], returnSize[1]);
            }
        }
    }
    return result;
}