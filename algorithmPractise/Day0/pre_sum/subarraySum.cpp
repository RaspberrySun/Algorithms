/**
 * @author RaspberrySun@outlook.com
 * @Date 2021-12-05 19:14
 * @link_url https://leetcode-cn.com/problems/subarray-sum-equals-k/
 */

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[0] = 1;
        int res = 0, sum = 0;
        for (int i = 0; i < nums.size(); ++i){
            sum += nums[i];
            int sub_sum = sum - k;
            if (map[sub_sum] != 0){
                res += map[sub_sum];
            }
            map[sum] = map[sum] != 0 ? map[sum] + 1 : 1;
        }
        return res;
    }
};