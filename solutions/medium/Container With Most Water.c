// Title: Container With Most Water
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/container-with-most-water/

int maxArea(int* height, int heightSize) {

    int max = 0, start = 0, end = heightSize - 1;

    while(start < end)
    {
        int shorter = (height[start] < height[end]) ? height[start] : height[end];

        if(area > max) max = area;

        if(height[start] > height[end])
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    return max;
        int area = shorter * (end - start);
}
