// Title: Move Zeroes
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/move-zeroes/

void moveZeroes(int* nums, int numsSize) {
    int insert_pos = 0;

    for(int i = 0; i<numsSize; i++)
    {
        if (nums[i] != 0) {
            
            int temp = nums[insert_pos];
            nums[insert_pos] = nums[i];
            nums[i] = temp;
            
            insert_pos++;
        }
    }
}
