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
    void inorder(TreeNode* root,vector<int>& ans){
       if(root==nullptr)return;
       inorder(root->left,ans);
       ans.push_back(root->val);
       inorder(root->right,ans);
       }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>ans1;
        vector<int>ans2;
       inorder(p,ans1);
       inorder(q,ans2);
       int n=ans1.size();
       int m=ans2.size();
       if(m!=n)return false;
       for(int i=0;i<m;i++){
        if(ans1[i]!=ans2[i])return false;
       }
       return true;
    }
};
