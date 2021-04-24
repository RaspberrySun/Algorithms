//
// Created by hp on 2021/4/23.
//


#include <vector>
#include <deque>
#include <algorithm>

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
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr)
            return res;
        std::deque<TreeNode*> treeDeque;
        treeDeque.push_back(root);
        int orderFlag = 0;
        while (!treeDeque.empty()){
            int levelNodes = treeDeque.size();
            std::vector<int> temp;
            for (int i = 0; i < levelNodes; ++i){
                TreeNode* tempTree = treeDeque.front();
                treeDeque.pop_front();
                temp.push_back(tempTree->val);
                if (tempTree->left){
                    treeDeque.push_back(tempTree->left);
                }
                if (tempTree->right){
                    treeDeque.push_back(tempTree->right);
                }
            }
            if (temp.size()>= 2 && orderFlag % 2 != 0){
                std::reverse(temp.begin(), temp.end());
            }
            orderFlag++;
            res.push_back(temp);
        }
        return res;
    }

private:
    std::vector<std::vector<int>> res;
};