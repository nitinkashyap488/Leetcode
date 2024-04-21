class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        int currColor = image[sr][sc];
        if(currColor == color){
            return image;
        }
        solve(image, sr, sc, color, currColor);
        return image;
    }
    public void solve(int[][] image, int sr, int sc, int color, int currColor){
        if(sr < 0 || sr >= image.length || sc < 0 || sc >= image[0].length){
            return;
        }
        if(image[sr][sc] != currColor){
            return;
        }
        image[sr][sc] = color;
        solve(image, sr - 1, sc, color, currColor);
        solve(image, sr, sc - 1, color, currColor);
        solve(image, sr + 1, sc, color, currColor);
        solve(image, sr, sc + 1, color, currColor);
    }
}