#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size();
        if(n < 4)
            return abs(nums[1] - nums[0]);
        
        sort(nums.begin(), nums.end());
        int m = n / 4;
        int p = m + n / 2;
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0 ; i < m ; i++) {
            sum1 = sum1 + nums[i] + nums[n - 1 - i];
            sum2 = sum2 + nums[m+i] + nums[n - 1 - i - m];
        }
        if(n % 4 == 0)
            return abs(sum1 - sum2);
        else
            return abs(sum1 - sum2) + abs(nums[m*2] - nums[m*2+1]);
    }
};

int main() {
    Solution obj1;
    vector<int> abc;
    int n;
    while(cin >> n)
        abc.push_back(n);

    int ans = obj1.minimumDifference(abc);
    cout << ans;
    return 0;
}

// class Solution {
// public:
//     int minimumDifference(vector<int>& nums) {
//         int n = nums.size();
//         if(n < 4)
//             return abs(nums[1] - nums[0]);
        
//         sort(nums.begin(), nums.end());
//         if(n % 4 == 0) {
//             int m = n / 4;
//             int p = m + n / 2;
//             int sum1 = 0;
//             int sum2 = 0;
//             for(int i = 0 ; i < m ; i++) 
//                 sum1 = sum1 + nums[i] + nums[n - 1 - i];
//             for(int i = m ; i < p ; i++)
//                 sum2 = sum2 + nums[i];
//             return abs(sum1 - sum2);
//         }
        
        
//         int m = n / 4;
//         int p = m + n / 2;
//         int sum1 = 0;
//         int sum2 = 0;
//         for(int i = 0 ; i < m ; i++) {
//                 sum1 = sum1 + nums[i] + nums[n - 1 - i];
//                 sum2 = sum2 + nums[m+i] + nums[m + n - 1 - i];
//         }
//         return abs((sum1 - sum2));
//     }
// };