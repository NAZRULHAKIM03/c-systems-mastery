// Title: Missing Number
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/missing-number/

int missingNumber(int* nums, int numsSize) {
    
    int result = 0;

    for(int i=0; i<numsSize; i++)
    {
        result ^= i;
        result ^= nums[i];
    }

    result ^= numsSize;

    return result;
}
