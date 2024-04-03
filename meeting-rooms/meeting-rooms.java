class Solution {
    public boolean canAttendMeetings(int[][] intervals) {
        Arrays.sort(intervals, Comparator.comparing(a -> a[0]));
        int n = intervals.length;
        for(int i =0; i< n - 1 ; i++){
            if(intervals[i][0] <= intervals[i+1][0] && intervals[i][1] > intervals[i + 1][0]){
                return false;
            }
        }
        return true;
    }
}