//
// Created by hp on 2021/4/25.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root->left == nullptr && root->right == nullptr){
            return true;
        }
        if (root->left == nullptr && root->right != nullptr){
            return false;
        }
        if (root->left != nullptr && root->right == nullptr){
            return false;
        }
        isBalanced(root->left);
        isBalanced(root->right);
    }
};