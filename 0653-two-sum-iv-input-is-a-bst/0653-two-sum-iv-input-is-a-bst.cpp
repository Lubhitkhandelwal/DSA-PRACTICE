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
class BSTIterator{
public:
    stack<TreeNode*> st;
    bool reverse;

    void pushAll(TreeNode* root){
        while(root){
            st.push(root);
            if(!reverse) root = root->left;
            else root = root->right;
        }
    }

    BSTIterator(TreeNode* root, bool rev){
        reverse = rev;
        pushAll(root);
    }

    bool hasNext(){
        return !st.empty();
    }

    int next(){
        TreeNode* ans = st.top();
        st.pop();

        if(!reverse){
            pushAll(ans->right);
        }else{
            pushAll(ans->left);
        }

        return ans->val;
    }

};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        BSTIterator l(root,false);
        BSTIterator r(root,true);

        int i = l.next();
        int j = r.next();

        while(i < j){
            if(i+j == k) return true;
            else if(i+j < k) i = l.next();
            else j = r.next();
        }
        return false;
    }
};