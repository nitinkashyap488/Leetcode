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
    private int maxPathSum = Integer.MIN_VALUE;
    
    public int maxPathSum(TreeNode root) {
        maxPathSumHelper(root);
        return maxPathSum;
    }
    
    private int maxPathSumHelper(TreeNode root) {
        if (root == null) {
            return 0;
        }
        
        int leftSum = Math.max(0, maxPathSumHelper(root.left));
        int rightSum = Math.max(0, maxPathSumHelper(root.right));
        
        int selfSum = leftSum + rightSum + root.val;
        maxPathSum = Math.max(maxPathSum, selfSum);
        
        return Math.max(leftSum, rightSum) + root.val;
    }
}