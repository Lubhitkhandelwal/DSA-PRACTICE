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
class NodeVal{
public:
    int maxSum, minVal, maxVal;
    NodeVal(int maxSum, int minVal, int maxVal){
        this->maxSum = maxSum;
        this->minVal = minVal;
        this->maxVal = maxVal;
    }
};
class Solution {
public:
    int ans = 0;
    NodeVal postOrder(TreeNode* root){
        if(!root){
            return NodeVal(0,INT_MAX,INT_MIN);
        }

        NodeVal left = postOrder(root->left);
        NodeVal right = postOrder(root->right);

        if(left.maxVal < root->val && root->val < right.minVal){
            int currSum = left.maxSum+right.maxSum+root->val;
            ans = max(ans,currSum);
            return NodeVal(currSum,min(left.minVal,root->val),max(right.maxVal,root->val));
        }

        return NodeVal(0,INT_MIN,INT_MAX);
    }

    int maxSumBST(TreeNode* root) {
        postOrder(root).maxSum;
        return ans;
    }
};