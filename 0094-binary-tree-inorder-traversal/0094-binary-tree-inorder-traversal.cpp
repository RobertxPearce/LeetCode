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
private:
    void recursiveTraversal(TreeNode* root, vector<int>& list) {
        if (root == NULL) {     // Check if node is null.
            return;             // If so return.
        }
        recursiveTraversal(root->left, list);   // Recursivly call on left first.
        list.push_back(root->val);              
        recursiveTraversal(root->right, list);  // Recursivly call o right.
    }   
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> list;               // List for return.
        
        recursiveTraversal(root, list); // Call recursive function.
        
        return list;
    }
};