class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, Comparator.comparing(a -> a[0]));
        List<int[]> arr = new ArrayList<>();
        for(int[] interval : intervals){
            if(arr.isEmpty() || arr.get(arr.size() - 1)[1] < interval[0]){
                arr.add(interval);
            }else{
                arr.get(arr.size() - 1)[1] = Math.max(arr.get(arr.size() - 1)[1], interval[1]);
            }
        }
        return arr.toArray(new int[arr.size()][]);
    }
}