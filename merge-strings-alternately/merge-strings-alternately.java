class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder sb = new StringBuilder();
        int i = 0, j =0;
        boolean flag = true;
        while( i < word1.length() || j < word2.length()){
            if(i < word1.length() && j < word2.length() ){
                if(flag){
                    sb.append(word1.charAt(i++));
                }else{
                    sb.append(word2.charAt(j++));
                }
            }else if(i < word1.length()){
                sb.append(word1.charAt(i++));
            }else if(j < word2.length()){
                sb.append(word2.charAt(j++));
            }
            flag = !flag;
        }
        return sb.toString();
    }
}