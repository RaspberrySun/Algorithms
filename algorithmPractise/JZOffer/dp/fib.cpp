//
// Created by sun on 2021/6/27.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/6/27 17:04
 */


class Solution {
public:
    int fib(int n) {
        int zeroVal = 0;
        int oneVal = 1;
        int sum = 0;
        // 此处n为累计次数，for循环条件可换成for(int i = 2; i <= n; ++i)
        for (int i = 1; i < n; ++i){
            sum = (zeroVal + oneVal) % 1000000007;
            zeroVal = oneVal;
            oneVal = sum;
        }
        return n > 1 ? sum : n;
    }
};