//
// Created by hp on 2021/4/23.
//


#include <vector>
#include <deque>

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
    std::vector<int> levelOrder(TreeNode* root) {
        if (root == nullptr)
            return res;
        std::deque<TreeNode*> treeDeque;
        treeDeque.push_back(root);
        while (!treeDeque.empty()){
            TreeNode* temp = treeDeque.front();
            res.push_back(temp->val);
            treeDeque.pop_front();
            if (temp->left){
                treeDeque.push_back(temp->left);
            }
            if (temp->right){
                treeDeque.push_back(temp->right);
            }
        }
        return res;
    }

private:
    std::vector<int> res;
};