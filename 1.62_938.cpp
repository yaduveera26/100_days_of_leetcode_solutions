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
    int s=0;
    void f(TreeNode *r,int &low,int &high)
    {
        if(r->left)
            f(r->left,low,high);
        if(r->val>=low&&r->val<=high)
            s+=r->val;
        if(r->right)
            f(r->right,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        f(root,low,high);
        return s;
    }
};
