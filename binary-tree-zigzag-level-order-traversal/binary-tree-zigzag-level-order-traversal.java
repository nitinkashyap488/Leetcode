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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> result = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        if(root == null){
            return result;
        }
        q.add(root);
        boolean leftToRight = true;
        while(!q.isEmpty()){
            List<Integer> list = new ArrayList<>();
            int currentLevel = q.size();
            for(int i = 0; i<currentLevel; i++){
                TreeNode node = q.remove();
                if(leftToRight){
                    list.add(node.val);
                }else{
                    list.add(0,node.val);
                }
                if(node.left != null){
                    q.add(node.left);
                }
                if(node.right != null){
                    q.add(node.right);
                }
            }
            result.add(list);
            leftToRight = !leftToRight;
        }
        return result;
    }
}