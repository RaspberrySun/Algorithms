//
// Created by hp on 2021/7/8.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */

#include <vector>
#include <string>

class Solution {
public:
    bool exist(std::vector<std::vector<char>>& board, std::string word) {
        line = board.size();
        column = board[0].size();
        for(int i = 0; i < line; ++i) {
            for(int j = 0; j < column; ++j) {
                if(dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }

    bool dfs(std::vector<std::vector<char>>& board, std::string word, int i, int j, int k){
        if(i >= line || i < 0 || j >= column || j < 0 || board[i][j] != word[k]) return false;
        if(k == word.size() - 1) return true;
        board[i][j] = '\0';
        bool res = dfs(board, word, i + 1, j, k + 1) || dfs(board, word, i - 1, j, k + 1) ||
                   dfs(board, word, i, j + 1, k + 1) || dfs(board, word, i , j - 1, k + 1);
        board[i][j] = word[k];
        return res;
    }

private:
    int line;
    int column;
};