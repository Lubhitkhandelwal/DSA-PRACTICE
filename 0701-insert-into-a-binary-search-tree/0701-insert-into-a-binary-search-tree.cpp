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
        TreeNode* temp = root;
        if(root==nullptr) return new TreeNode(val);
        while(true){
            if(val < temp->val){
                if(temp->left==nullptr){
                    TreeNode* in = new TreeNode(val);
                    temp->left = in;
                    break;
                }
                temp = temp->left;
            }else if(val > temp->val){
                if(temp->right==nullptr){
                    TreeNode* in = new TreeNode(val);
                    temp->right = in;
                    break;
                }
                temp = temp->right;
            }else{
                break;
            }
        }
        return root;
    }
};