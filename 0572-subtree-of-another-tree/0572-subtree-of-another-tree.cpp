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
    bool isIdentical(TreeNode* p,TreeNode* q){
        if(p==NULL || q==NULL){
            return p==q;
        }
        bool left = isIdentical(p->left,q->left);
        bool right = isIdentical(p->right,q->right);
        return left && right && p->val==q->val;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==NULL){
            return true;
        }
        if(root==NULL){
            return false;
        }
        
        if(root->val==subRoot->val){
            if(isIdentical(root,subRoot)){
                return true;
            }
        }
        
        bool left = isSubtree(root->left,subRoot);
        bool right = isSubtree(root->right,subRoot);
        return left || right;
    }
};