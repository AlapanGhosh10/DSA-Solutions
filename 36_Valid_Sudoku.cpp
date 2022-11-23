class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0 ; i < board.size() ; i++) {
            unordered_set<char> row;
            unordered_set<char> col;
            for(int j = 0 ; j < board.size() ; j++) {
                if(board[i][j] == '.') {
                    
                } else if(row.find(board[i][j]) == row.end())
                    row.insert(board[i][j]);
                else {
                    return false;
                }
                if(board[j][i] == '.') {
                    
                } else if(col.find(board[j][i]) == col.end())
                    col.insert(board[j][i]);
                else {
                    return false;
                }
                if(i % 3 == 0 && j % 3 == 0) {
                    unordered_set<char> box;
                    for(int x = 0 ; x < 3 ; x++) {
                        for(int y = 0 ; y < 3 ; y++) {
                            if(board[i+x][j+y] == '.') {
                            } else if(box.find(board[i+x][j+y]) == box.end()) {
                                box.insert(board[i+x][j+y]);
                            }
                            else {
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};
