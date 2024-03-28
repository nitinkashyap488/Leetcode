class Solution {
    public int myAtoi(String str) {
        int index = 0, sign = 1;
        StringBuilder sb = new StringBuilder();
        while (index < str.length() && str.charAt(index) == ' ') {
            index++;
        }
        if (index < str.length() && (str.charAt(index) == '-' || str.charAt(index) == '+')) {
            sign = str.charAt(index++) == '-' ? -1 : 1;
        }
        while (index < str.length() && Character.isDigit(str.charAt(index))) {
            sb.append(str.charAt(index++));
        }
        String res = sb.toString();
        if(res.length() == 0){
            return 0;
        }
        try{
            return Integer.parseInt(res)*sign;
        }catch(Exception e){
            return (sign == 1)? Integer.MAX_VALUE:Integer.MIN_VALUE;
        }
    }
}