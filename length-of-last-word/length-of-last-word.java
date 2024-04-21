class Solution {
    public int lengthOfLastWord(String s) {
        String[] strArray = s.trim().split("\\s+");
        return strArray[strArray.length -1].length();
    }
}