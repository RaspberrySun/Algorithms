/**
 * @author RaspberrySun@outlook.com
 * @Date 2021-12-08 23:22
 * @link_url
 */

#include <vector>

using namespace std;

class Solution {
private:
    vector<int> diff;
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        bool flag = true;
        vector<int>(1000, 0).swap(diff);
        for (auto trip : trips){
            increment(trip[1], trip[2]-1, trip[0]);
        }
        vector<int> ca(1000);
        ca[0] = diff[0];
        for (int i = 1; i < ca.size(); ++i){
            ca[i] = ca[i-1] + diff[i];
        }
        for (auto v : ca){
            if (v > capacity){
                flag = false;
                return flag;
            }
        }
        return flag;
    }

    void increment(int i, int j, int val){
        diff[i] += val;
        if (j + 1 < diff.size()){
            diff[j+1] -= val;
        }
    }
};
