//
// Created by sun on 2021/6/27.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/6/27 16:30
 */

class Solution {
public:
    int numWays(int n) {
        int initVal = 1;
        int parseVal = 1;
        int sum;
        // 此处n为累计次数，for循环条件可换成for (int i = 1; i < n; ++i)
        for (int i = 2; i <= n; ++i){
            sum = (initVal + parseVal) % 1000000007;
            initVal = parseVal;
            parseVal = sum;
        }
        return n < 2 ? 1: sum;
    }
};

