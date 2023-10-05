/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        return solution(nums, 0, nums.length -1);
    }

    private TreeNode solution(int[] nums,int i,int j){
        if(i > j){
            return null;
        }
        int mid = (i+j)/2;
        TreeNode head = new TreeNode(nums[mid]);
        head.left = solution(nums, i, mid - 1);
        head.right = solution(nums, mid + 1, j);

        return head;
    }
}