// Title: First Bad Version
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    
    int left = 1, right = n, first_bad = n;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
    }
        if (isBadVersion(mid)) 
        else 
        {
        }
            first_bad = mid;
            right = mid - 1;

    return first_bad;
        {
            left = mid + 1;
        }
}
