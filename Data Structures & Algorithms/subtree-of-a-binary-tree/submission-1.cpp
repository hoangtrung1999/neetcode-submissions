/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool dfs(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr && subRoot == nullptr)
            return true;
        else if (root == nullptr || subRoot == nullptr)
            return false;
        else if (root->val != subRoot->val)
            return false;

        bool left = dfs (root->left, subRoot->left);
        bool right = dfs (root->right, subRoot->right);
        return left&&right;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr)
            return false;
        bool rootCheck = dfs(root, subRoot);
        if (rootCheck)
            return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
