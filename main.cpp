#include <iostream>

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


int main(){
    Solution1 solution1;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->left->right->left = new TreeNode(4);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    TreeNode* p = root->right->right;
    TreeNode* q = root->right->left;
    std:: cout << solution1.lowestCommonAncestor(root, p, q)->val << std::endl;
    return 0;
}