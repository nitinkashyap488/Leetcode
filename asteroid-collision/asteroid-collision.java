class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        Stack<Integer> stk = new Stack<>();
        for (int asteroid : asteroids) {
            while (!stk.isEmpty() && stk.peek() > 0 && asteroid < 0 && Math.abs(stk.peek()) < Math.abs(asteroid)) {
                stk.pop();
            }
            if (!stk.isEmpty() && stk.peek() > 0 && asteroid < 0 && Math.abs(stk.peek()) == Math.abs(asteroid)) {
                stk.pop();
                continue;
            }
            if (stk.isEmpty() || stk.peek() < 0 || asteroid > 0) {
                stk.add(asteroid);
            }
        }
        int[] ans = new int[stk.size()];
        for (int i = ans.length - 1; i >= 0; i--) {
            ans[i] = stk.pop();
        }
        return ans;
    }
}