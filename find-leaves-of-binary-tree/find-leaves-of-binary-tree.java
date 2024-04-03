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
    public List<List<Integer>> findLeaves(TreeNode root) {
        List<List<Integer>> result = new ArrayList<>();
        if(root == null){
            return result;
        }
        while(root != null){
            List<Integer> list = new ArrayList<>();
            root = collectLeaves(root, list);
            result.add(list);
        }
        
        return result;
    }
    public TreeNode collectLeaves(TreeNode root, List<Integer> list){
        if(root == null){
            return null;
        }
        if(root.left == null && root.right == null){
            list.add(root.val);
            return null;
        }
        root.left = collectLeaves(root.left, list);
        root.right = collectLeaves(root.right, list);
        return root;
    }
}