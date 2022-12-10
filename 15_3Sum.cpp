/*OPTIMIZED*/
/*Time -> O(n^2)*/
/*Given an integer array nums, return all the triplets 
[nums[i], nums[j], nums[k]] 
such that i != j, i != k, and j != k, 
and nums[i] + nums[j] + nums[k] == 0.*/

Notice that the solution set must not contain duplicate triplets.
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0 ; i < nums.size() - 2 ; i++) {
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            int a = i + 1;
            int b = nums.size() - 1;
            while(a < b) {
                int sum = nums[i] + nums[a] + nums[b];
                if(sum > 0)
                    b--;
                else if(sum < 0)
                    a++;
                else {
                    res.push_back({nums[i], nums[a], nums[b]});
                    a++;
                    while(nums[a] == nums[a-1] && a < b)
                        a++;
                }
            }
        }
        return res;
    }
};

/************
Explanation
*************/
/* sort the array
traverse from index 0 to n - 2 (cos 3 sum)
then two pointer to find the sum
No comes the real deal i.e. to remove duplicates
Now as the array is sorted, when we select i 
we check if the nums[i] is same as nums[i-1]
incase it is same we continue to next iteration
This way we dont repeat combinations with same starting element
Now for the duplicates in the 2nd and 3rd index i.e. a and b
if we take care of either of a or b the deal is done
so weincrement a whenever we get a sum
and continue incrementing a until nums[a-1] != nums[a]
this way all types of duplicacies are removed */
