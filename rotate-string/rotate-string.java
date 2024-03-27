class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length() != goal.length()){
            return false;
        }
        String concate = s+s;
        return concate.contains(goal);
    }
}