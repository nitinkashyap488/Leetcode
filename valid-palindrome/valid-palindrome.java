class Solution {
    public boolean isPalindrome(String s) {
        if(s.trim().isEmpty()){
            return true;
        }
        StringBuilder sb = new StringBuilder();
        for(char ch : s.toCharArray()){
            if(Character.isLetterOrDigit(ch)){
                sb.append(Character.toLowerCase(ch));
            }
        }
        return check(sb.toString());
    }
    public boolean check(String str){
        int i = 0, j = str.length() - 1;
        while( i <= j){
            if(str.charAt(i++) != str.charAt(j--)){
                return false;
            }
        }
        return true;
    }
}