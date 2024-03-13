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
    int nodeAmt = 0;

    int countNodes(TreeNode* root) {
        if (root == NULL)           // Check if param is null.
            return 0;               // If so return/ add nothing.
       
        nodeAmt += 1;               // Add 1 to counter.
        
        countNodes(root->left);     // Recursivly call on left.
        countNodes(root->right);    // Recursivly call on right.
        
        return nodeAmt;             // Return final count.
    }
};