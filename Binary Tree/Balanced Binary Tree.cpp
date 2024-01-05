class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        return max(leftDepth, rightDepth) + 1;
    }

    bool isBalanced(TreeNode *root)
    {

        if (root == NULL)
            return true;

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        bool currDiff = abs(left - right) <= 1;

        bool leftTrees = isBalanced(root->left);
        bool rightTrees = isBalanced(root->right);

        if (currDiff && leftTrees && rightTrees)
            return true;
        else
            return false;
    }
};