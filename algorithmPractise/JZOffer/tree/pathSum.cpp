//
// Created by hp on 2021/4/25.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */
#include <vector>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class Solution {
public:
    std::vector<std::vector<int>> pathSum(TreeNode* root, int target) {
        if (root == nullptr)
            return res;
        dfs(root, target);
        return res;
    }

    void dfs(TreeNode* root, int target){
        if (root == nullptr)
            return;
        else{
            target -= root->val;
            path.push_back(root->val);
            if (target == 0 && root->left == nullptr && root->right == nullptr){
                res.push_back(path);
            } if (target > 0 || root->left != nullptr || root->right != nullptr){
                dfs(root->left, target);
                dfs(root->right, target);
            }
            path.pop_back();
        }
    }

private:
    std::vector<std::vector<int>> res;
    std::vector<int> path;
};