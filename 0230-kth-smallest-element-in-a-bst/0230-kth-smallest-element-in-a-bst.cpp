class Solution {
public:
    int ans = -1;

    void solve(TreeNode* root, int& k)
    {
        if (root == NULL)
            return;

        // Left
        solve(root->left, k);

        // Current node
        k--;

        if (k == 0)
        {
            ans = root->val;
            return;
        }

        // Right
        solve(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k)
    {
        solve(root, k);
        return ans;
    }
};