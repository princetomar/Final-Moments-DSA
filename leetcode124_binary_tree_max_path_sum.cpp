/*
124. Binary Tree Maximum Path Sum
A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass through the root.

The path sum of a path is the sum of the node's values in the path.

Given the root of a binary tree, return the maximum path sum of any non-empty path.

Input: root = [1,2,3]
Output: 6
Explanation: The optimal path is 2 -> 1 -> 3 with a path sum of 2 + 1 + 3 = 6.
*/

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
    int maxS = INT_MIN;
    int maxSum(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        
        int lefts = max(0,maxSum(root->left));
        int rights = max(0, maxSum(root-> right));
        
        maxS = max(maxS , root->val + lefts + rights);
        return max(lefts,rights) + root-> val;
    }
public:
    
    int maxPathSum(TreeNode* root) {
        maxSum(root);
        return maxS;
    }
};
