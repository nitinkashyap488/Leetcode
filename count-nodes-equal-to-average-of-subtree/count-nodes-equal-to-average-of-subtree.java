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
    int count = 0;

    public int averageOfSubtree(TreeNode root) {
        computeSumAndCount(root);
        return count;
    }

    private SubtreeInfo computeSumAndCount(TreeNode node) {
        if (node == null) {
            return new SubtreeInfo(0, 0);
        }

        SubtreeInfo leftInfo = computeSumAndCount(node.left);
        SubtreeInfo rightInfo = computeSumAndCount(node.right);

        int totalSum = leftInfo.sum + rightInfo.sum + node.val;
        int nodeCount = leftInfo.nodeCount + rightInfo.nodeCount + 1;

        int avg = totalSum / nodeCount;

        if (avg == node.val) {
            count++;
        }

        return new SubtreeInfo(totalSum, nodeCount);
    }

    private static class SubtreeInfo {
        int sum;
        int nodeCount;

        SubtreeInfo(int sum, int nodeCount) {
            this.sum = sum;
            this.nodeCount = nodeCount;
        }
    }
}
