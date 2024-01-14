/* A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.

 

Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
Example 2:

Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
 

Constraints:

1 <= nums.length <= 1000
-231 <= nums[i] <= 231 - 1
nums[i] != nums[i + 1] for all valid i.*/






/*class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end - start)/2;

        while (start < end) //this time its not s<=e because in else part s=e so if we put s=e condition here it will end up in an infinite loop.
        {
            if (nums[mid] < nums[mid+1])
                {
                start = mid + 1; //search right , nums[mid] lies in line A (refer notes)
                }
            else{
                end = mid ; // nums [mid] can be the peak element or lies in line B (refer notes)
                }
            mid = start + (end - start)/2;
        }

        return start ; // or return end ;

    }
};*/