/**
 * @author RaspberrySun@outlook.com
 * @Date 2021-12-08 22:56
 * @link_url https://leetcode-cn.com/problems/corporate-flight-bookings/
 */

#include <vector>

using namespace std;

class Solution {
private:
    vector<int> diff;
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>(n, 0).swap(diff);
        for (auto booking : bookings){
            increment(booking[0], booking[1], booking[2]);
        }
        vector<int> res(n, 0);
        res[0] = diff[0];
        for (int i = 1; i < res.size(); ++i){
            res[i] = res[i - 1] + diff[i];
        }
        return res;
    }

    void increment(int i, int j, int val){
        i--;
        j--;
        diff[i] += val;
        if (j + 1 < diff.size()){
            diff[j + 1] -= val;
        }
    }
};