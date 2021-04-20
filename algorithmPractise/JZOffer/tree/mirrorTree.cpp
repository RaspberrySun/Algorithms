//
// Created by sun on 2021/4/20.
//

/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */

#include <iostream>
#include <algorithm>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution{
public:
    TreeNode* mirrorTree(TreeNode* root){
        if (!root){
            return nullptr;
        }
        if (root){
            TreeNode* temp = root->left;
            root->left = mirrorTree(root->right);
            root->right = mirrorTree(temp);
        }
        return root;
    }
};