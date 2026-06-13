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
void SwapNodes (TreeNode*& Left, TreeNode*& Right)
{
    TreeNode* temp;
    temp = Left;
    Left = Right;
    Right = temp;
}

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr)
            return nullptr;
        SwapNodes (root->left, root->right);
        invertTree (root->left);
        invertTree (root->right);
        return root;
    }
};
