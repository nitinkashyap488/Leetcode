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
    private int height(TreeNode head){
        if(head == null){
            return 0;
        }
        return 1 + Math.max(height(head.left), height(head.right));
    }
    public boolean isBalanced(TreeNode root) {
        if(root == null ){
            return true;
        }
        int leftTree = height(root.left);
        int rightTree = height(root.right);
        if (Math.abs(leftTree - rightTree) > 1) {
            return false;
        }
        return isBalanced(root.left) && isBalanced(root.right);
    }
}