//
// Created by hp on 2021/4/23.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */


#include <algorithm>

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 };

 class Solution{
 public:
     int maxDepth(TreeNode* root) {
         if (root == nullptr){
             return 0;
         }
         else{
             return std::max(maxDepth(root->left), maxDepth(root->right)) + 1;
         }
     }
 };
