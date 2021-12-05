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
    
    bool test(TreeNode* root,long long low,long long high){
        if(!root)return true;
        if(root->val<=low or root->val>=high)return false;
        return test(root->left,low,root->val) && test(root->right,root->val,high);
    }
    bool isValidBST(TreeNode* root) {
        if(!root)return true;
        // if(root->left and root->left->val>=root->val)return false;
        // if(root->right and root->right->val<=root->val)return false;
        return test(root,(long long)(-2147483697),(long long)(2147483697));
        // return isValidBST(root->left) and isValidBST(root->right);
        
    }
};