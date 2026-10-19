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
    TreeNode* insert(TreeNode* root,int value){
        if(root==nullptr){
            return new TreeNode(value);
        }
        if(root->val<value){
            root->right=insert(root->right,value);
        }else{
            root->left=insert(root->left,value);
        }
    return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return insert(root,val);
    }
};