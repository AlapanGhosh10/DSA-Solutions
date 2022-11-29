// Using AV's IP-OP method
class Solution {
private:
    vector<vector<int>> res;
    void recTree(vector<int>& nums, int i, vector<int> in) {
        if(i == nums.size()) {
            res.push_back(in);
            return;
        }
        recTree(nums, i + 1, in);
        in.push_back(nums[i]);
        recTree(nums, i + 1, in);
    } 
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        recTree(nums, 0, {});
        return res;
    }
};
