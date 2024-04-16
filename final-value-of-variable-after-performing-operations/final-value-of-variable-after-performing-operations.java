class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int x = 0;
        for(String str : operations){
            if(str.equalsIgnoreCase("++X") || str.equalsIgnoreCase("X++")){
                x = x+1;
            }else if(str.equalsIgnoreCase("--X") || str.equalsIgnoreCase("X--")){
                x = x-1;
            }            
        }
        return x;
    }
}