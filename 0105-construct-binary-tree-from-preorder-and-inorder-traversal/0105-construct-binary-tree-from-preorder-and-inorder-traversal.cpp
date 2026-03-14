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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, unordered_map<int,int>& inMap, int preS, int preE, int inS, int inE){
        if(preS>preE || inS>inE) return nullptr;

        TreeNode* root = new TreeNode(preorder[preS]);
        int idx = inMap[root->val];
        int size = idx-inS;

        root->left = build(preorder,inorder,inMap,preS+1,preS+size,inS,idx-1);
        root->right = build(preorder,inorder,inMap,preS+size+1,preE,idx+1,inE);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> inMap;
        for(int i=0;i<inorder.size();i++){
            inMap[inorder[i]]=i;
        }
        TreeNode* root = build(preorder,inorder,inMap,0,preorder.size()-1,0,inorder.size()-1);

        return root;
    }
};