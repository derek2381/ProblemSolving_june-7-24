// problem link
// https://leetcode.com/problems/search-in-a-binary-search-tree/description/

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
    TreeNode* iterate(TreeNode* root,int val){
        if(!root){
            return nullptr;
        }

        if(root->val == val){
            return root;
        }else if(root->val > val){
            return iterate(root->left, val);
        }else{
            return iterate(root->right, val);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return iterate(root,val);

    }
};
