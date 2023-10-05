class Solution {
    public int strStr(String haystack, String needle) {
        if(needle.length() == 0){
            return 0;
        }
        int  j = 0;
        for(int i = 0; i < haystack.length(); i++){
            if(haystack.charAt(i) == needle.charAt(j)){
                j++;
            }else{
                i = i - j;
                j = 0;
            }
            if(j == needle.length()){
                return i - j + 1;
            }
        }
        return -1 ;
    }
}