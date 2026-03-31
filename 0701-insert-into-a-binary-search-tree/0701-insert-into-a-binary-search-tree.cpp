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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* ans = root;
        if(root==nullptr) return new TreeNode(val);
        while(root!=nullptr){
            if(val < root->val){
                if(root->left==nullptr){
                    TreeNode* curr = new TreeNode(val);
                    root->left = curr;
                    break;
                }
                root = root->left;
            }else if(val > root->val){
                if(root->right==nullptr){
                    TreeNode* curr = new TreeNode(val);
                    root->right = curr;
                    break;
                }
                root = root->right;
            }else{
                break;
            }
        }
        return ans;
    }
};