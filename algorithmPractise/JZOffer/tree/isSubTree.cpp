//
// Created by sun on 2021/2/2.
//

/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */

#include <iostream>
#include <vector>
#include <map>


struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};

class Solution{
public:
    bool isSubStructure(TreeNode* A, TreeNode* B){
        if (A == nullptr || B == nullptr)
            return false;
        if (A->val == B->val && subTree(A, B))
            return true;
        return isSubStructure(A->left, B) || isSubStructure(A->right, B);
    }

    bool subTree(TreeNode* A, TreeNode* B){
        if (B == nullptr)
            return true;
        if (A == nullptr)
            return false;
        if (A->val != B->val)
            return false;
        return subTree(A->left, B->left) && subTree(A->right, B->right);
    }
};