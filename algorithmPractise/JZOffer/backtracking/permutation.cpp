//
// Created by hp on 2021/7/13.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> permutation(string s) {
        visitor.resize(s.size());
        sort(s.begin(), s.end());
        string track = "";
        backtrack(track, s);
        return res;
    }

    void backtrack(string &track, string s){
        if (track.size() == s.size()){
            res.push_back(track);
            return;
        }
        for (int i = 0; i < s.size(); ++i){
            if (visitor[i] || (i > 0 && !visitor[i-1] && s[i-1] == s[i])){
                continue;
            }
            visitor[i] = true;
            track.push_back(s[i]);
            backtrack(track, s);
            track.pop_back();
            visitor[i] = false;
        }
    }

private:
    vector<string> res;
    vector<bool> visitor;
};