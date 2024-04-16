class Solution {
    public boolean checkIfPangram(String sentence) {
        int[] arr = new int[26];
        for(char ch : sentence.toCharArray()){
            arr[ch-'a']++;
        }
        for(int i =0; i<26; i++){
            if(arr[i] < 1){
                return false;
            }
        }
        return true;
    }
}