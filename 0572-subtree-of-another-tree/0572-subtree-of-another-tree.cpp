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
    bool identical(TreeNode* p,TreeNode* q){
        if(p==NULL || q==NULL){
            return p==q;
        }
        bool l = identical(p->left,q->left);
        bool r = identical(p->right,q->right);

        return l && r && p->val==q->val;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL){
            return false;
        }
        if(subRoot==NULL){
            return true;
        }
        if(root->val==subRoot->val){
            if(identical(root,subRoot)){
                return true;
            }
        }

        bool left =  isSubtree(root->left,subRoot);
        bool right = isSubtree(root->right,subRoot);

        return left||right;  
    }
};