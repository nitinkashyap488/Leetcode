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
    int widthOfBinaryTree(TreeNode* root) {
        int width = 0;
        if(root == NULL){
            return width;
        }
        
        queue<pair<TreeNode *, unsigned long long int>> q;
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            unsigned long long int left_index = q.front().second, right_index = 0;
            unsigned long long int size = q.size();
            
            for(unsigned long long int i=0; i<size; i++){
                
                pair<TreeNode *, unsigned long long int> p = q.front();
                q.pop();
                
                TreeNode *temp = p.first;
                right_index = p.second;
                
                if(temp->left){
                    q.push(make_pair(temp->left, 2*right_index + 1));
                }
                if(temp->right){
                    q.push(make_pair(temp->right, 2*right_index + 2));
                }
            }
            
            width = max(width, int(right_index - left_index + 1));
        }
        return width;
    }
};