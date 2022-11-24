class Solution {
private:
    vector<vector<char>> temp;
    bool exists(string word, int i, int j, int k) {
        char tempo = temp[i][j];
        if(tempo == word[k]) {
            temp[i][j] = '.';
            k++;
        } else {
            return false;
        }
        if(k == word.length()) {
            return true;
        }
        bool flag = false;
        if(i + 1 < temp.size())
            flag = exists(word, i + 1, j, k);
        if(flag)
            return true;
        if(j + 1 < temp[0].size())
            flag = exists( word, i, j + 1, k);
        if(flag)
            return true;
        if(i - 1 >= 0)
            flag = exists(word, i - 1, j, k);
        if(flag)
            return true;
        if(j - 1 >= 0)
            flag = exists(word, i, j - 1, k);
        if(flag)
            return true;
        temp[i][j] = tempo;
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int i = 0, j = 0;
        bool flag = false;
        for(int i = 0 ; i < board.size() ; i++) {
            for(int j = 0 ; j < board[0].size() ; j++) {
                if(board[i][j] == word[0]) {
                    temp = board;
                    flag = exists(word, i, j, 0);
                }
                if(flag)
                    return true;
            }
        }
        return false;
    }
};
