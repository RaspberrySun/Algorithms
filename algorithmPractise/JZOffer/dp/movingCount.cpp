//
// Created by sun on 2021/6/27.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/6/27 17:31
 */
#include <vector>
#include <queue>

/**
 * 地上有一个m行n列的方格，从坐标 [0,0] 到坐标 [m-1,n-1] 。一个机器人从坐标 [0, 0] 的格子开始移动，它每次可以向左、右、上、
 * 下移动一格（不能移动到方格外），也不能进入行坐标和列坐标的数位之和大于k的格子。例如，当k为18时，
 * 机器人能够进入方格 [35, 37] ，因为3+5+3+7=18。但它不能进入方格 [35, 38]，因为3+5+3+8=19。请问该机器人能够到达多少个格子？
 */
class Solution {
public:
    int movingCount(int m, int n, int k) {

        if(!k)
            return 1;
        std::queue<std::pair<int, int>> Q;
        int dx[2] = {0, 1};
        int dy[2] = {1, 0};
        std::vector<std::vector<int>> vis(m, std::vector<int> (n, 0));
        Q.push(std::make_pair(0, 0));

    }

    // 计算x的位数之和
    int calDigits(int x){
        int res = 0;
        for (; x; x/=10){
            res += x%10;
        }
        return res;
    }
};