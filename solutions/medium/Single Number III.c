// Title: Single Number III
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/single-number-iii/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    
    unsigned int xor_result = 0, a=0, b=0;

    for(int i=0; i<numsSize; i++)
    {
        xor_result ^= (unsigned int)nums[i];
    }

    unsigned int set_bit = xor_result & (~xor_result + 1u);

    for(int i=0; i<numsSize; i++)
    {
        if((unsigned int)nums[i] & set_bit)
        {
            a ^= (unsigned int)nums[i];
        }
        else
        {
            b ^= (unsigned int)nums[i];
        }
    }

    int *result = (int *)malloc(2 * sizeof(int));
    result[0] = (int)a;
    result[1] = (int)b;
    *returnSize = 2;

    return result;
}
