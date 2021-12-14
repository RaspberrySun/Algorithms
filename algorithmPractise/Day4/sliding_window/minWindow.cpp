/**
 * @author RaspberrySun@outlook.com
 * @Date 2021-12-14 22:47
 * @link_url https://leetcode-cn.com/problems/minimum-window-substring/
 */

#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need, window;
        for (char c : t){
            need[c]++;
        }
        int left = 0, right = 0;
        int valid = 0;
        // 记录最小覆盖字串的起始索引和长度
        int start = 0, len = INT32_MAX;
        while (right < s.size()){
            // c 是将移⼊窗⼝的字符
            char c = s[right];
            // 右移窗⼝
            right++;
            // 进⾏窗⼝内数据的⼀系列更新
            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c]){
                    valid++;
                }
            }
            // 判断左侧窗⼝是否要收缩
            while (valid == need.size()){
                // 在这⾥更新最⼩覆盖⼦串
                if (right - left < len){
                    start = left;
                    len = right - left;
                }
                // d 是将移出窗⼝的字符
                char d = s[left];
                // 左移窗⼝
                left++;
                // 进⾏窗⼝内数据的⼀系列更新
                if (need.count(d)){
                    if (window[d] == need[d]){
                        valid--;
                    }
                    window[d]--;
                }
            }
        }
        return len == INT32_MAX ? "" : s.substr(start, len);
    }
};