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
    int mPath(TreeNode* root, int& maxV){
        if(root==nullptr) return 0;

        int leftV = max(0,mPath(root->left,maxV));
        int rightV = max(0,mPath(root->right,maxV));

        maxV = max(maxV,leftV+rightV+root->val);

        return max(leftV,rightV)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxV = INT_MIN;
        mPath(root,maxV);
        return maxV;
    }
};