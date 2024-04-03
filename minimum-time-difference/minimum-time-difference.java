class Solution {
    public int findMinDifference(List<String> timePoints) {
        List<Integer> minutes = new ArrayList<>();
        
        for (String time : timePoints) {
            int totalMinutes = calculateTime(time);
            minutes.add(totalMinutes);
        }
        
        Collections.sort(minutes);
        
        int minDifference = Integer.MAX_VALUE;
        int n = minutes.size();
        
        for (int i = 1; i < n; i++) {
            int diff = minutes.get(i) - minutes.get(i - 1);
            minDifference = Math.min(minDifference, diff);
        }
        
        int diffBetweenEndAndStart = 24 * 60 - (minutes.get(n - 1) - minutes.get(0));
        minDifference = Math.min(minDifference, diffBetweenEndAndStart);
        
        return minDifference;
    }
    
    private int calculateTime(String str) {
        String[] arr = str.trim().split(":");
        int hour = Integer.parseInt(arr[0]);
        int min = Integer.parseInt(arr[1]);
        
        return hour * 60 + min;
    }
}