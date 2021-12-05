/**
 * @author RaspberrySun@outlook.com
 * @Date 2021-12-05 18:24
 * @link_url https://leetcode-cn.com/problems/range-sum-query-immutable/
 */

#include <vector>

using namespace std;

class NumArray {
public:
    NumArray(vector<int>& nums) {
        vector<int>(nums.size() + 1, 0).swap(pre_sum);
        pre_sum[0] = 0;
        for (int i = 1; i < pre_sum.size(); ++i){
            pre_sum[i] = pre_sum[i - 1] + nums[i - 1];
        }
    }

    int sumRange(int left, int right) {
        return pre_sum[right + 1] - pre_sum[left];
    }

private:
    vector<int> pre_sum;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */