// Title: Bitwise AND of Numbers Range
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/bitwise-and-of-numbers-range/

int rangeBitwiseAnd(int left, int right) {

    int shift = 0;

    while(left < right)
    {
        left >>= 1;
    }
    return left << shift;    
        right >>= 1;
        shift++;
 
}
