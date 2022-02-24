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
    void dfs(TreeNode* root, int row, int col, map<int, vector<pair<int, int>>> &mp){
        if(!root)return;
        mp[row].push_back(make_pair(col, root->val));
        dfs(root->left, row-1, col+1, mp);
        dfs(root->right, row+1, col+1, mp);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<pair<int, int>>> mp;
        vector<vector<int>> ans;
        
        dfs(root, 0, 0, mp);
        for(auto x:mp){
            sort(x.second.begin(), x.second.end());
            vector<int> tmp;
            for(auto i:x.second){
                tmp.push_back(i.second);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};