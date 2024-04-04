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
    public List<TreeNode> delNodes(TreeNode root, int[] to_delete) {
        List<TreeNode> list = new ArrayList<>();
        HashSet<Integer> set = new HashSet<>();
        for(int i = 0; i < to_delete.length; i++){
            set.add(to_delete[i]);
        }
        dfs(root, set, list, true);
        return list;
    }
    public TreeNode dfs(TreeNode root, Set<Integer> deleteSet, List<TreeNode> list, boolean isRoot){
        if(root == null){
            return null;
        }
        boolean delete = deleteSet.contains(root.val);
        if(isRoot && !delete){
            list.add(root);
        }
        root.left = dfs(root.left, deleteSet, list, delete);
        root.right = dfs(root.right, deleteSet, list, delete);
        
        return delete ? null:root;
    }
}