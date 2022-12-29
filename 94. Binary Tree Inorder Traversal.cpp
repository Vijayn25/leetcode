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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> reslut;
        inorder(root,reslut);
        return reslut;
    }
    void inorder(TreeNode* r,vector<int>& res){
        if(r==NULL){
            return ;
        }
        inorder(r->left,res);
        res.push_back(r->val);
        inorder(r->right,res);
    }
};
