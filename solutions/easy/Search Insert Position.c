// Title: Search Insert Position
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/search-insert-position/

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if (target < nums[mid]) right = mid - 1;
        else left = mid + 1;
    }
        else if (nums[mid] == target) return mid;


    return left;
}
