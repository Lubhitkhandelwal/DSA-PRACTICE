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
    TreeNode* build(vector<int>& preorder, int& idx, int minVal, int maxVal){
        if(idx > preorder.size()-1){
            return nullptr;
        }

        if(preorder[idx] < minVal || preorder[idx] > maxVal){
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[idx]);
        idx++;

        root->left = build(preorder,idx,minVal,root->val);
        root->right = build(preorder,idx,root->val,maxVal);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx = 0;
        return build(preorder,idx,INT_MIN,INT_MAX);
    }
};