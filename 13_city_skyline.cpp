#include<iostream>
#include<vector>
using namespace std;

int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int add = 0;
        int row = grid.size();
        int col = grid[0].size();
        int rowMax, colMax, toAdd, block;

        for(int i = 0 ; i < row ; i++) {
            for(int j = 0 ; j < col ; j++) {
                block = grid[i][j];

                rowMax = block;
                for(int x = 0 ; x < col ; x++)
                    if(grid[i][x] > rowMax)
                        rowMax = grid[i][x];

                colMax = block;
                for(int x = 0 ; x < row ; x++)
                    if(grid[x][j] > colMax)
                        colMax = grid[x][j];

                if(rowMax < colMax)
                    add = add + rowMax - block;
                else 
                    add = add + colMax - block;
            }
        }
        return add;
}

int main() {
	vector<vector<int>> grid = {{3,0,8,4}, {2,4,5,7}, {9,2,6,3}, {0,3,1,0}};
	int res = maxIncreaseKeepingSkyline(grid);
	cout << res;
}