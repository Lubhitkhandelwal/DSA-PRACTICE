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
    // vector<int> ans;
    // void preOrder(TreeNode* root){
    //     if(root==NULL){
    //         return;
    //     }
    //     ans.push_back(root->val);
    //     preOrder(root->left);
    //     preOrder(root->right);
    // }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if(root==nullptr) return preorder;

        TreeNode* curr = root;
        while(curr!=nullptr){
            if(curr->left==nullptr){
                preorder.push_back(curr->val);
                curr=curr->right;
            }else{
                TreeNode* prev = curr->left;
                while(prev->right!=nullptr && prev->right!=curr){
                    prev = prev->right;
                }

                if(prev->right!=curr){
                    preorder.push_back(curr->val);
                    prev->right = curr;
                    curr = curr->left;
                }else{
                    prev->right = nullptr;
                    curr = curr->right;
                }
            }
        }



        return preorder;
    }
};