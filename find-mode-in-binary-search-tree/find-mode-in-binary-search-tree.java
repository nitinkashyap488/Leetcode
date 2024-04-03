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
    public int[] findMode(TreeNode root) {
        HashMap<Integer, Integer> map = new HashMap<>();
        solve(root, map);
        int maxFrequency = 0;
        for (int count : map.values()) {
            maxFrequency = Math.max(maxFrequency, count);
        }
        
        int modeCount = 0;
        for (int count : map.values()) {
            if (count == maxFrequency) modeCount++;
        }
        
        int[] modes = new int[modeCount];
        int index = 0;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() == maxFrequency) {
                modes[index++] = entry.getKey();
            }
        }
        return modes;
    }
    public void solve(TreeNode root, HashMap<Integer, Integer> map){
        if(root == null){
            return;
        }
        map.put(root.val, map.getOrDefault(root.val, 0) + 1);
        solve(root.left, map);
        solve(root.right,map);
    }
}