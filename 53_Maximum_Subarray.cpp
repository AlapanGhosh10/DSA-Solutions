// Given an integer array nums, find the subarray which has the largest sum and return its sum.
// Kadane's Algorithm (advanced prefix sum with conditions)
// Time -> O(N)
// Space -> O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int n, sum = 0, maxSum = INT_MIN;
	    for(int i = 0 ; i < nums.size() ; i++) {
            nums[i] += sum;
            n = nums[i];
            maxSum = max(maxSum, n);
            sum = n > 0 ? n : 0;
	    }
	return maxSum;
    }
};
