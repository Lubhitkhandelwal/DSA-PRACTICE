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
    int d = 0;
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int leftH = height(root->left);
        int rightH = height(root->right);

        d = max(d,abs(leftH-rightH));
        return max(leftH,rightH)+1;
    }

    bool isBalanced(TreeNode* root) {
        height(root);
        if(d>1){
            return false;
        }else{
            return true;
        }
        
    }
};