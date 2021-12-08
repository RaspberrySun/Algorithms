/**
 * @author RaspberrySun@outlook.com
 * @Date 2021-12-05 18:24
 * @link_url https://leetcode-cn.com/problems/range-sum-query-2d-immutable/
 */

#include <vector>

using namespace std;

class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>>(row + 1, vector<int>(col + 1, 0)).swap(pre_sum);
        for (int i = 1; i < row + 1; ++i){
            for (int j = 1; j < col + 1; ++j){
                pre_sum[i][j] = pre_sum[i-1][j] + pre_sum[i][j-1] - pre_sum[i-1][j-1] + matrix[i-1][j-1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return pre_sum[row2+1][col2+1] - pre_sum[row2+1][col1] - pre_sum[row1][col2+1] + pre_sum[row1][col1];
    }

private:
    vector<vector<int>> pre_sum;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */

