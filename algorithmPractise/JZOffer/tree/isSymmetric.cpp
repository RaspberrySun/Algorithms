//
// Created by hp on 2021/4/21.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution{
public:
    bool isSymmetric(TreeNode *root){
        if (root == nullptr){
            return true;
        }
        return nodeCompare(root->left, root->right);

    }

    bool nodeCompare(TreeNode* left, TreeNode *right){
        if (left == nullptr && right == nullptr){
            return true;
        }
        if (left == nullptr || right == nullptr || left->val != right->val){
            return false;
        }
        return nodeCompare(left->left, right->right) && nodeCompare(left->right, right->left);
    }
};