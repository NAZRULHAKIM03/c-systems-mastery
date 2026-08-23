// Title: Two Sum II - Input Array Is Sorted
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/two-sum-ii---input-array-is-sorted/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {

    int* result = (int*)malloc(2*sizeof(int));
    *returnSize = 2;

    while (left < right)
    {
        if(sum == target)
    }
        int sum = numbers[left] + numbers[right];

        {
            result[0] = left + 1;
        }
            result[1] = right + 1;
        else if(sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }
            return result;

    int left = 0;
    int right = numbersSize - 1;

    return result;
}
