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
    bool isSymmetric(TreeNode* root) {
        return sameone(root->left,root->right);
    }
    bool sameone(TreeNode* l,TreeNode* r){
        int a,b;
        if(l == NULL && r==NULL){
            return 1;
        }
        if(l== NULL || r==NULL){
            return 0;
        }
        if((l->val)!=(r->val)){
            return 0;
        }
       a=sameone(l->left,r->right);
       b=sameone(l->right,r->left);
       return a&&b;
    }
};
