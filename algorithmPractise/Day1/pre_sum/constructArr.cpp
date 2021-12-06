/**
 * @author RaspberrySun@outlook.com
 * @Date 2021-12-06 21:55
 * @link_url https://leetcode-cn.com/problems/gou-jian-cheng-ji-shu-zu-lcof/
 */

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        int len = a.size();
        vector<int> b(len, 1);
        if (len == 0){
            return b;
        }
        int left = 1, right = 1;
        for (int i = 0; i < len; ++i){
            b[i] *= left;  // count left
            left *= a[i];
            b[len - i - 1] *= right;
            right *= a[len - i - 1]; // count right
        }
        return b;
    }
};