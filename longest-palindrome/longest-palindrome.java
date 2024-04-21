class Solution {
    public int longestPalindrome(String s) {
        if(s.length() == 0 || s.isEmpty()){
            return 0;
        }
        Map<Character, Integer> map = new HashMap<>();
        for(char ch : s.toCharArray()){
            map.put(ch, map.getOrDefault(ch,0)+1);
        }
        int count = 0;
        boolean odd = false;
        for(Map.Entry<Character,Integer> entry : map.entrySet()){
            if(entry.getValue() % 2 == 0){
                count += entry.getValue();
            }else{
                count += entry.getValue() - 1;
                odd = true;
            }
        }
        if(odd == true){
            count+= 1;
        }
        return count;
    }
}