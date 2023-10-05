class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> triangle = new ArrayList<>();

        for(int i = 0; i <numRows; i++){
            List<Integer> currRow = new ArrayList<>();
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    currRow.add(1);
                }else{
                    List<Integer> prevRow = triangle.get(i-1);
                    int sum = prevRow.get(j-1) + prevRow.get(j);
                    currRow.add(sum);
                }
            }
            triangle.add(currRow);
        }

        return triangle;
    }
}