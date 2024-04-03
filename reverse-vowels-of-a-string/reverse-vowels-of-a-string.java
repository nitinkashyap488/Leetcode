class Solution {
    private boolean isVowel(char c) {
        return "aeiouAEIOU".indexOf(c) != -1;
    }
    public String reverseVowels(String s) {
        int i = 0, j = s.length() - 1;
        char[] ch = s.toCharArray();
        while( i <= j){
            while(i < j && !isVowel(ch[i])){
                i++;
            }
            while(i < j && !isVowel(ch[j])){
                j--;
            }
            char temp = ch[i];
            ch[i] = ch[j];
            ch[j] = temp;
            i++;
            j--;
        }
        return new String(ch);
    }
}