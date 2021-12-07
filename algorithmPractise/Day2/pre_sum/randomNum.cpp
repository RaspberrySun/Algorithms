/**
 * @author RaspberrySun@outlook.com
 * @Date 2021-12-07 21:36
 * @link_url https://leetcode-cn.com/problems/cuyjEf/
 */

#include <vector>
#include <cmath>

using namespace std;

class Solution {
private:
    vector<int> pre_sum;
public:
    Solution(vector<int>& w) {
        int len = w.size();
        vector<int>(len, 0).swap(pre_sum);
        int sum = 0;
        for (int i = 0; i < len; ++i) {
            sum += w[i];
            pre_sum[i] = sum;                  //计算前缀和
        }
    }

    int pickIndex() {
        int rad = rand() % pre_sum.back() + 1; //等概率生成随机数1~sum+1
        int left = 0;
        int right = pre_sum.size() - 1;
        while (left <= right) {                //二分法
            int mid = left + ((right - left) >> 1);
            if (rad <= pre_sum[mid]) {
                if (mid == 0 || rad > pre_sum[mid - 1]) {
                    return mid;
                }
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return -1;
    }
};



/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
