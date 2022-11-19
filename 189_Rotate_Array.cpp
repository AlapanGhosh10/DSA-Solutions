// Given an array, rotate the array to the right by k steps, where k is non-negative.
// Made using Queue - Sliding Window
// Time -> O(N)
// Space -> O(k)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        queue<int> q;
        k %= nums.size();
        for(int i = 0 ; i < k ; i++) 
            q.push(nums[i]);
        
        for(int i = k ; i < nums.size() ; i++) {
            q.push(nums[i]);
            nums[i] = q.front();
            q.pop();
        }
        
        for(int i = 0 ; i < k ; i++) {
            nums[i] = q.front();
            q.pop();
        }
    }
};
