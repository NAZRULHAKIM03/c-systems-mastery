// Title: Reverse Bits
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/reverse-bits/

int reverseBits(int n) {
    
    int last_bit = 0, result = 0;

    for(int i=0; i<32; i++)
    {
        last_bit = n & 1;
        n = n >> 1;
    }
        result = result << 1;
        result = result | last_bit;

    return result;
}
