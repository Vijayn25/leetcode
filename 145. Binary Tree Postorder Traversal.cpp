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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> out;
        postorder(root,out);
        return out;
    }
    void postorder(TreeNode* root, vector<int>& out){
        if(root == NULL){
            return ;
        }
        out.push_back(root->val);
        postorder(root->left,out);
        postorder(root->right,out);
    }
};
