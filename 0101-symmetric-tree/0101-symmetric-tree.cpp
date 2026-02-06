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
    bool sym(TreeNode* p,TreeNode* q){
        if(p==NULL || q==NULL){
            return p==q;
        }
        bool left = sym(p->left,q->right);
        bool right = sym(p->right,q->left);
        return left && right && p->val==q->val;
    }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        return sym(left,right);
    }
};