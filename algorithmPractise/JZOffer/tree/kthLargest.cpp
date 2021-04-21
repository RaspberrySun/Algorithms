//
// Created by hp on 2021/4/22.
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

class Solution {
public:
    int kthLargest(TreeNode* root, int k) {
        inOrder(root);
        return res[k];
    }

    std::vector<int> inOrder(TreeNode* root){
        if (root){
            inOrder(root->right);
            res.push_back(root->val);
            inOrder(root->left);
        }
        return res;
    }

private:
    std::vector<int> res;
};