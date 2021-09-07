majority- element
Moore voting algorithm
https://leetcode.com/problems/majority-element/submissions/
_____________________________________________________________

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int maj_index = 0, count = 1;
    for (int i = 1; i < size; i++) {
        if (nums[maj_index] == nums[i])
            count++;
        else
            count--;
        if (count == 0) {
            maj_index = i;
            count = 1;
        }
    }
    return nums[maj_index];
        
    }
};