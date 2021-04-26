//
// Created by hp on 2021/4/25.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */

#include <algorithm>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfs(root) != -1;
    }

    int dfs(TreeNode* root){
        if (root != nullptr){
            int left = dfs(root->left);
            if (left == -1){
                return -1;
            }
            int right = dfs(root->right);
            if (right == -1){
                return -1;
            }
            if (abs(left - right) > 1){
                return -1;
            }
            else{
                return std::max(left, right) + 1;
            }
        }
        else{
            return 0;
        }
    }
};