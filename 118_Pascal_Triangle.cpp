class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res = {{1}};
        for(int i = 1 ; i < numRows ; i++) {
            vector<int> in = {1};
            for(int j = 1 ; j < i ; j++) 
                in.push_back(res[i-1][j-1] + res[i-1][j]);
            in.push_back(1);
            res.push_back(in);
        }
        return res;
    }
};
