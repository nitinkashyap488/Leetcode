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
    public List<Integer> boundaryOfBinaryTree(TreeNode root) {
        List<Integer> list = new ArrayList<>();
        if(root == null){
            return list;
        }
        list.add(root.val);
        addLeftBoundary(root.left, list);
        if(root.left != null || root.right != null){
            addLeaves(root, list);
        }
        addRightBoundary(root.right, list);
        
        return list;
    }
    public void addLeftBoundary(TreeNode root, List<Integer> list){
        if(root == null || (root.left == null && root.right == null)){
            return;
        }
        list.add(root.val);
        if(root.left != null){
            addLeftBoundary(root.left, list);
        }else{
            addLeftBoundary(root.right, list);
        }
    }
    public void addLeaves(TreeNode root, List<Integer> list){
        if(root == null){
            return;
        }
        if(root.left == null && root.right == null){
            list.add(root.val);
        }
        addLeaves(root.left,list);
        addLeaves(root.right, list);
    }
    public void addRightBoundary(TreeNode root, List<Integer> list){
        if(root == null || (root.left == null && root.right == null)){
            return;
        }
        if(root.right != null){
            addRightBoundary(root.right, list);
        }else{
            addRightBoundary(root.left, list);
        }
        list.add(root.val);
    }
}