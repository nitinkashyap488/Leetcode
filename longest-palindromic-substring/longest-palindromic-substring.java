class Solution {
    public String longestPalindrome(String s) {
        int len = 0;
        String str ="";
        for(int i =0; i < s.length(); i++){
            for(int j = i; j <= s.length(); j++){
                if(isPalindrome(s.substring(i,j)) && j-i > len){
                    len = j-i;
                    str = s.substring(i,j);
                }
            }
        }
        return str;
    }
    public boolean isPalindrome(String str){
        int i = 0; 
        int j = str.length() -1;
        while(i<=j){
            if(str.charAt(i++) != str.charAt(j--)){
                return false;
            }
        }
        return true;
    }
}