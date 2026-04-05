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
    TreeNode* search(TreeNode* root,TreeNode*& parent, int key){
        if(root == nullptr){
            return nullptr;
        }

        if(key == root->val){
            return root;
        }else if(key < root->val){
            parent = root;
            return search(root->left,parent,key);
        }else{
            parent = root;
            return search(root->right,parent,key);
        }
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* parent = nullptr;
        TreeNode* curr = search(root,parent,key);

        if(curr==nullptr) return root;

        if(curr->left && curr->right){
            TreeNode* temp = curr->right;
            TreeNode* prevTemp = curr;
            while(temp->left){
                prevTemp = temp;
                temp = temp->left;
            }
            curr->val = temp->val;

            parent = prevTemp;
            curr = temp;
        }

        TreeNode* child = nullptr;
        if(curr->left){
            child = curr->left;
        }else if(curr->right){
            child = curr->right;
        }

        if(parent==nullptr) return child;

        if(parent->left == curr){
            parent->left = child;
        }else if(parent->right ==curr){
            parent->right = child;
        }
        return root;
    }
};