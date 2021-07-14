//
// Created by hp on 2021/7/13.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> permutation(string s) {
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
            if (track.find(s[i]) != string::npos){
                continue;
            }
            track.push_back(s[i]);
            backtrack(track, s);
            track.pop_back();
        }
    }

private:
    vector<string> res;
};