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
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, unordered_map<int,int>& inMap, int postS,int postE, int inS, int inE){
        if(inS>inE || postS>postE){
            return nullptr;
        }

        TreeNode* root = new TreeNode(postorder[postE]);
        int idx = inMap[root->val];
        int size = idx - inS;

        root->left = build(inorder,postorder,inMap,postS,postS+size-1,inS,idx-1);
        root->right = build(inorder,postorder,inMap,postS+size,postE-1,idx+1,inE);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> inMap;
        for(int i=0;i<inorder.size();i++){
            inMap[inorder[i]]=i;
        }

        TreeNode* root = build(inorder,postorder,inMap,0,postorder.size()-1,0,inorder.size()-1);
        return root;
    }
};