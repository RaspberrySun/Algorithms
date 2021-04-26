//
// Created by hp on 2021/4/26.
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


class Solution1 {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        dfs(root, p, q);
        return res;
    }

    bool dfs(TreeNode* root, TreeNode* p, TreeNode* q){
        if (root == nullptr){
            return false;
        }
        bool lson = dfs(root->left, p, q);
        bool rson = dfs(root->right, p, q);
        if ((lson && rson) || ((root->val == q->val || root->val == p->val) && (lson || rson))){
            res = root;
        }
        return lson || rson || ((root->val == q->val) || (root->val == p->val));
    }

private:
    TreeNode* res;
};
