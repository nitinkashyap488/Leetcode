class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        for (int[] row : image) {
            int left = 0, right = row.length - 1;
            while (left <= right) {
                int temp = row[left];
                row[left] = row[right] ^ 1;
                row[right] = temp ^ 1;
                
                left++;
                right--;
            }
        }
        return image;
    }
}