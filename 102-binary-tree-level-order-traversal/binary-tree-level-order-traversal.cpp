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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL){
            return res;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>currentlevel;
            int level=q.size();
            for(int i=0;i<level;i++)
            {
                TreeNode*nn=q.front();
                q.pop();
                currentlevel.push_back(nn->val);
                if(nn->left)
                    q.push(nn->left);
                if(nn->right)
                    q.push(nn->right);
            } 
            res.push_back(currentlevel);;
              


        }
        return res;

        
    }
};