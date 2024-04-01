// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode left, TreeNode right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void solve(TreeNode root, vector<string> &str, string s)
    {
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL)
        {
            s += to_string(root->val);
            str.push_back(s);
            return;
        }

        s += to_string(root->val);

        if (root->left || root->right)
        {
            s += "->";
        }

        solve(root->left, str, s);
        solve(root->right, str, s);
    }

    vector<string> binaryTreePaths(TreeNode root)
    {

        vector<string> str;
        string s = "";
        solve(root, str, s);

        return str;
    }
};