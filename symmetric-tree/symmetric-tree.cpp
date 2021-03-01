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
    bool solution(TreeNode *l, TreeNode* r){
        if(!l && !r){
            return true;
        }else if(l && r){
            if(l->val !=r->val){
                return false;
            }else{
                return solution(l->left,r->right) && solution(l->right, r->left);
            }
        }else{
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        return solution(root->left,root->right);
    }
};