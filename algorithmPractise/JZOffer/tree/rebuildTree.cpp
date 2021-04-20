//
// Created by sun on 2021/4/20.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
    int index = 0;
public:
    TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
        TreeNode* root = nullptr;
        root = reBuild(preorder, inorder, 0, preorder.size());
        return root;
    }

    TreeNode* reBuild(std::vector<int> &preOrder, std::vector<int> &inOrder, int left, int right){
        if (index == preOrder.size() || preOrder.empty())
            return nullptr;
        TreeNode* root = nullptr;
        for(int i = left; i < right; ++i){
            if (preOrder[index] == inOrder[i]){
                root = new TreeNode(preOrder[index]);
                index++;
                root->left = reBuild(preOrder, inOrder, left, i);
                root->right = reBuild(preOrder, inOrder, i+1, right);
                break;
            }
        }
        return root;
    }
};

class Solution2 {
public:
    TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
        if (preorder.size() == 0 || inorder.size() == 0 || preorder.size() != inorder.size()){
            return nullptr;
        }
        std::vector<int> preLeft, preRight, inLeft, inRight;
        int index = 0;
        for (int i = 0; i < inorder.size(); ++i){
            if (inorder[i] == preorder[0]){
                index = i;
                break;
            }
        }
        for (int i = 0; i < inorder.size(); ++i){
            if (i < index){
                preLeft.push_back(preorder[i+1]);
                inLeft.push_back(inorder[i]);
            }
            else if (i > index){
                preRight.push_back(preorder[i]);
                inRight.push_back(inorder[i]);
            }
        }
        TreeNode* root = new TreeNode(preorder[0]);
        root->left = buildTree(preLeft, inLeft);
        root->right = buildTree(preRight, inRight);
        return root;
    }
};


