class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> list = new ArrayList<>();
        list.add(new ArrayList<>());
        list.get(0).add(1);
        for(int i = 1; i < numRows; i++){
            List<Integer> tempList = new ArrayList<>();
            tempList.add(1);
            for(int j = 1; j < i; j++){
                tempList.add(list.get(i-1).get(j-1) + list.get(i-1).get(j));
            }
            tempList.add(1);
            list.add(tempList);
        }
        return list;
    }
}