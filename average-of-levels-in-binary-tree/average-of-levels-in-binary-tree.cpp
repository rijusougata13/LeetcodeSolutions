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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>arr;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            queue<TreeNode*>qq;
            double ans=0;
            int cnt=0;
            while(!q.empty()){
            TreeNode* nd=q.front();
            q.pop();
            ans+=nd->val;
            cnt++;
            if(nd->left)qq.push(nd->left);
                 if(nd->right)qq.push(nd->right);
        }
            arr.push_back(ans/cnt);
            q=qq;    
            
        }
        return arr;
    }
};