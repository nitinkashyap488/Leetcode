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
    int height(TreeNode* ptr){
        if(ptr==NULL){
            return 0;
        }
        return 1+ max(height(ptr->left),height(ptr->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int LeftTree = height(root->left);
        int RightTree = height(root->right);
        if(abs(LeftTree-RightTree)>1){
            return false;
        }
        
        return isBalanced(root->left) && isBalanced(root->right);
    }
};