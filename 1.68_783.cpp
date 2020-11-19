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
    void f(vector<int>&v,TreeNode *r)
    {
        if(r)
        {
            v.push_back(r->val);
            f(v,r->left);
            f(v,r->right);
        }
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>v;
        f(v,root);
        sort(v.begin(),v.end());
        int mn=INT_MAX;
        for(int i=0;i<v.size()-1;i++)
        {
            int b=v[i]-v[i+1];
            if(b<0)
                b*=-1;
            mn=min(mn,b);
        }
        return mn;
    }
};
