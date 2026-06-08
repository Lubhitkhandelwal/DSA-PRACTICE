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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        int n = descriptions.size();
        
        unordered_map<int,TreeNode*> m;
        unordered_set<int> child;
        
        for(int i=0;i<n;i++){
            int par = descriptions[i][0];
            int ch = descriptions[i][1];
            int dir = descriptions[i][2];

            child.insert(ch);

            if(!m.count(par)){
                m[par] = new TreeNode(par);
            }

            if(!m.count(ch)){
                m[ch] = new TreeNode(ch);
            }

            if(dir == 1){
                m[par]->left = m[ch];
            }else{
                m[par]->right = m[ch];
            }
        }

        for(auto &d:descriptions){
            int temp = d[0];
            if(!child.count(temp)){
                return m[temp];
            }
        }
        return nullptr;
    }
};