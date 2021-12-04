#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* array = (int*)malloc(2*sizeof(int));
    int i = 0;
    int j = 0;
    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                array[0] = i;
                array[1] = j;
                *returnSize = 2;
                return array;
            }
        }
    }
    *returnSize = 0;
    array = NULL;
    return array;
}
int main() {
    int nums[10000] = { 3,2,4 };
    int target = 6;
    int numsSize = sizeof(nums) / sizeof(nums[1]);
    int returnSize[2] = { 0 };
    int*array=twoSum(nums, numsSize, target, returnSize);
    int i = 0;
    for (i = 0; i < 2; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}