// problem link
// https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/description/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* search(TreeNode* root1,TreeNode* root2, TreeNode* target){
        if(!root1 || !root2){
            return NULL;
        }


        if(root1->val == root2->val && root2->val == target->val){
            return root2;
        }

        TreeNode* leftTree = search(root1->left, root2->left, target);

        if(leftTree != NULL){
            return leftTree;
        }

        return search(root1->right, root2->right, target);
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return search(original, cloned, target);
    }
};
