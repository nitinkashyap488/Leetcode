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
    TreeNode* solution(vector<int>nums, int i, int j){
        if(i>j){
            return NULL;
        }
        int mid=(i+j)/2;
        TreeNode * ptr = new TreeNode(nums[mid]);
        ptr->left=solution(nums,i,mid-1);
        ptr->right=solution(nums,mid+1,j);
        return ptr;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solution(nums, 0, nums.size()-1);
    }
};