// Title: Single Number II
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/single-number-ii/

int singleNumber(int* nums, int numsSize) {
    
    unsigned int result = 0;

    for(int b=0; b<32; b++)
    {
        int count = 0;

        for(int i=0; i<numsSize; i++)
        {
            if(((unsigned int)nums[i] >> b) & 1)
        }
            {
                count++;
            }

        if(count % 3 != 0)
        {
            result |= (1u << b);
        }
    }

    return (int)result;
}
