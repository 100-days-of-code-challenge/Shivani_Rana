leetcode problem - Container-with-most-Water
https://leetcode.com/problems/container-with-most-water/submissions/
__________________________________________________________________________

 int i = 0, j = height.size() - 1, max_area = 0;
        while (i < j) {
            max_area = max(max_area, min(height[i], height[j]) * (j - i));
            if (height[i] > height[j]) {
                --j;
            } else if (height[i] < height[j]) {
                ++i;
            } else {  // height[i] == height[j].
                ++i, --j;
            }
        }
        return max_area;
    }
