//
// Created by sun on 2021/5/9.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/5/9 14:24
 */


#include <iostream>
#include <deque>
#include <vector>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode (int x) : val(x), left(nullptr), right(nullptr) {}
};

class Codec {
public:

    // Encodes a tree to a single string.
    std::string serialize(TreeNode* root) {
        std::string data = "";
        if (root == nullptr)
            return data;
        std::deque<TreeNode*> treeDeque;
        treeDeque.push_back(root);
        while (!treeDeque.empty()) {
            int len = treeDeque.size();
            while (len--) {
                TreeNode *temp = treeDeque.front();
                if (temp == nullptr) {
                    data.append("$");
                } else {
                    data.append(std::to_string(temp->val));
                    treeDeque.push_back(temp->left);
                    treeDeque.push_back(temp->right);
                }
                data.append(",");
                treeDeque.pop_front();
            }
        }
        data.pop_back();
        return data;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(std::string data) {
        TreeNode* root = nullptr;
        if (data.empty())
            return root;
        std::vector<TreeNode*> treeVector;
        std::string tempStr;
        for (auto str : data){
            if (str == '$'){
                treeVector.push_back(nullptr);
            }
            if (str != ','){
                tempStr.push_back(str);
            }
            if (str == ',' && !tempStr.empty()){
                int val = std::stoi(tempStr);
                auto *temp = new TreeNode(val);
                treeVector.push_back(temp);
                tempStr = "";
            }
        }
        int j = 1;
        for (int i = 0; j < treeVector.size(); ++i){
            if (nullptr == treeVector[i]){
                continue;
            }
            if (j < treeVector.size()){
                treeVector[i]->left = treeVector[j++];
            }
            if (j < treeVector.size()){
                treeVector[i]->right = treeVector[j++];
            }
        }
        return treeVector[0];
    }
};
