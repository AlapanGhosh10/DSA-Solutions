class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum, a = 0, b = numbers.size() - 1;
        while(a < b) {
            sum = numbers[a] + numbers[b];
            if(target > sum)
                a++;
            else if(target < sum)
                b--;
            else
                return {a + 1, b + 1};
        }
        return {};
    }
};

/************
 Explanation
*************/
/*two pointer
a -> index from start
b -> index from end
sum up both
if sum < target => a++
if sum > target => b--
else i.e. sum == target => return (a, b) */
