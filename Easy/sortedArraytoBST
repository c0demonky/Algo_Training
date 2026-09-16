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
    TreeNode* sortedArrayToBST(vector<int>& nums) {

        if (nums.empty()) {
            TreeNode* n = nullptr; 
            return n;
        }

        int midpoint = nums.size()/2;
        TreeNode* root = new TreeNode(nums[midpoint]);
    
        vector<int> left(nums.begin(), nums.begin() + midpoint);
        vector<int> right(nums.begin() + midpoint + 1, nums.end());

        root->left = sortedArrayToBST(left);
        root->right = sortedArrayToBST(right);
        
        return root;
    }
};