class Solution {
    public String addBinary(String a, String b) {
        int i = a.length() -1;
        int j = b.length() -1;
        int carry = 0;
        String ans = "";
        while(i >= 0 || j >= 0 || carry > 0){
            int x = (i >= 0) ? a.charAt(i--) - '0' : 0;
            int y = (j >= 0) ? b.charAt(j--) - '0' : 0;
            int sum = x+y+carry;
            int temp = sum % 2;
            ans = String.valueOf(sum%2) + ans;
            //  ans = Integer.toString(sum%2) + ans;
            carry = sum / 2;
        }
        return ans;
    }
}