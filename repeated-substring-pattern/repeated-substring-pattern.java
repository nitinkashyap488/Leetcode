class Solution {
    public boolean repeatedSubstringPattern(String s) {
        if(s.length() <= 1){
            return false;
        }
        String doubled = s+s;
        String trimmed = doubled.substring(1, doubled.length() - 1);
        return trimmed.contains(s);
    }
}