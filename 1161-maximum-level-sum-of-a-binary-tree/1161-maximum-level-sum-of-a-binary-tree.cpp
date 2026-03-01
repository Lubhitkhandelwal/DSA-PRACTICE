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
    int maxLevelSum(TreeNode* root) {

        if(root == NULL) return 0;

        queue<TreeNode*> q;
        unordered_map<int,long long> m;

        q.push(root);
        q.push(NULL);

        int k = 1;
        long long temp = 0;

        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();

            if(curr == NULL){
                m[k] = temp;
                temp = 0;
                k++;

                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                temp += curr->val;

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }
        }

        long long maxSum = LLONG_MIN;
        int maxLevel = 1;

        for(auto &it : m){
            if(it.second >= maxSum){
                maxSum = it.second;
                maxLevel = it.first;
            }
        }

        return maxLevel;
    }
};