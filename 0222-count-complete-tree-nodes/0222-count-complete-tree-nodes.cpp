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
    int leftH(TreeNode* root){
        int h = 0;
        while(root!=nullptr){
            root = root->left;
            h++;
        }
        return h;
    }
    int rightH(TreeNode* root){
        int h = 0;
        while(root!=nullptr){
            root = root->right;
            h++;
        }
        return h;
    }
    int countNodes(TreeNode* root) {
        if(root == nullptr) return 0;

        int lH = leftH(root);
        int rH = rightH(root);

        if(lH == rH){
            return pow(2,lH)-1 ;
        }
        return countNodes(root->left)+countNodes(root->right)+1;
    }
};