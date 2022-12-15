/* Easy traverse up down left right */
class Solution {
private:
    int check(vector<vector<int>>& grid, int i, int j) {
        if(i >= grid.size() || i < 0 || j >= grid[0].size() || j < 0)
            return 0;
        if(grid[i][j] == 0)
            return 0;
        else {
           grid[i][j] = 0;
           int count = 1;
           count += check(grid, i + 1, j);
           count += check(grid, i - 1, j);
           count += check(grid, i, j + 1);
           count += check(grid, i, j - 1);
           return count;
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res, max = 0;
        for(int i = 0 ; i < grid.size() ; i++)
            for(int j = 0 ; j < grid[0].size() ; j++)
                if(grid[i][j] == 1) {
                    res = check(grid, i, j);
                    if(res > max)
                        max = res;
                }
        return max;
    }
};
