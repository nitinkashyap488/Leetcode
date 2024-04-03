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
    public List<String> binaryTreePaths(TreeNode root) {
        List<String> list = new ArrayList<>();
        if(root == null){
            return list;
        }
        solve(root, "", list);
        return list;
    }
    public void solve(TreeNode root, String str, List<String> list){
        if(root == null){
            return;
        }
        if(root.left == null && root.right == null){
            str += String.valueOf(root.val);
            list.add(str);
            return;
        }
        str += String.valueOf(root.val) + "->";
        solve(root.left, str, list);
        solve(root.right, str, list);
    }
}