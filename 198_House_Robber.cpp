/* Easy DP problem */
/* check from index 0 another check from index 1 */
/* return the max */
class Solution {
private:
    unordered_map<int, int> map;
    int check(vector<int>& nums, int i) {
        if(i >= nums.size())
            return 0;
        if(i == nums.size() - 1 || i == nums.size() - 2)
            return nums[i];
        if(map.find(i) != map.end())
            return map[i];
        int sum1 = nums[i] + check(nums, i + 2);
        int sum2 = nums[i] + check(nums, i + 3);
        int maxx = max(sum1, sum2);
        map[i] = maxx;
        return maxx;
    }
public:
    int rob(vector<int>& nums) {
        int sum1 = check(nums, 0);
        int sum2 = check(nums, 1);
        return max(sum1, sum2);
    }
};
