class Solution {
    public int beautySum(String s) {
        int sum = 0;
        for(int i =0; i<s.length() ; i++){
            for(int j =i; j <= s.length() ; j++){
                sum += calculateBeauty(s.substring(i,j));
            }
        }
        return sum;
    }
    public int calculateBeauty(String s){
        int[] count = new int[26];
        for(char ch : s.toCharArray()){
            count[ch-'a']++;
        }
        int max = 0, min = s.length();
        for(int i = 0; i < 26; i++){
            max = Math.max(count[i], max);
            if(count[i] != 0){
                min = Math.min(count[i], min);
            }
        }
        return max - min;
    }
}