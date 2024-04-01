class Solution {
    public int sumSubarrayMins(int[] arr) {
        long MOD = 1000000007;
        long sum = 0;
        Stack<Integer> stack = new Stack<>();
        int[] left = new int[arr.length];
        int[] right = new int[arr.length];

        for (int i = 0; i < arr.length; i++) {
            while (!stack.isEmpty() && arr[stack.peek()] >= arr[i]) {
                stack.pop();
            }
            left[i] = stack.isEmpty() ? -1 : stack.peek();
            stack.push(i);
        }

        stack.clear();

        for (int i = arr.length - 1; i >= 0; i--) {
            while (!stack.isEmpty() && arr[stack.peek()] > arr[i]) {
                stack.pop();
            }
            right[i] = stack.isEmpty() ? arr.length : stack.peek();
            stack.push(i);
        }
        
        for (int i = 0; i < arr.length; i++) {
            sum = (sum + (i - left[i]) * (right[i] - i) * (long)arr[i]) % MOD;
        }

        return (int)sum;
    }
}