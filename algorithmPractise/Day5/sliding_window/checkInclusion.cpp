/**
 * @author RaspberrySun@outlook.com
 * @Date 2021-12-28 23:37
 * @link_url https://leetcode-cn.com/problems/permutation-in-string/
 */

#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> need, window;
        for (auto item : s1){
            need[item]++;
        }
        int left = 0, right = 0;
        int need_val = 0;
        while (right < s2.size()){
            char c = s2[right];
            right++;
            if (need.count(c)){
                window[c]++;
                if (window[c] == need[c]){
                    need_val++;
                }
            }
            while (right - left >= s1.size()){
                if (need_val == need.size()){
                    return true;
                }
                char d = s2[left];
                left++;
                if (need.count(d)){
                    if (window[d] == need[d]){
                        need_val--;
                    }
                    window[d]--;
                }
            }
        }
        return false;
    }
};