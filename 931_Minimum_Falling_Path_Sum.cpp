/* DP problem */
/* traversed according to the recursion tree *?
/* stored them accordingly */

class Solution {
private:
    vector<vector<int>> rest = {};
    int dp(vector<vector<int>>& mat, int i, int j) {
        if(j < 0 || j > mat.size() - 1) 
            return INT_MAX;
        if(i == mat.size() - 1)
            return mat[i][j];
        if(rest[i][j] != INT_MAX) 
            return rest[i][j];
        int res, min = INT_MAX;
        res = dp(mat, i + 1, j - 1);
        if(res < min)
            min = res;
        res = dp(mat, i + 1, j);
        if(res < min)
            min = res;
        res = dp(mat, i + 1, j + 1);
        if(res < min)
            min = res;
        rest[i][j] = min + mat[i][j];
        return rest[i][j];
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        for(int i = 0 ; i < matrix.size() ; i++) {
            vector<int> in = {};
            for(int j = 0 ; j < matrix.size() ; j++) {
                in.push_back(INT_MAX);
            }
            rest.push_back(in);
        }
        int res, min = INT_MAX;
        for(int j = 0 ; j < matrix.size() ; j++) {
            res = dp(matrix, 0, j);
            if(res < min)
                min = res;
        }
        return min;
    }
};
