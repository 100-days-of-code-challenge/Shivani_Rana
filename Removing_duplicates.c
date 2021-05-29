leetcode problem:-
Removing duplicates from sorted array
https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/
____________________________________________________________________________________

int removeDuplicates(int* nums, int numsSize){
   int count = 0;
for(int i = 1; i < numsSize; i++){
    if(nums[i] == nums[i-1]) count++;
    else nums[i-count] = nums[i];
}
return numsSize-count;
}