class Solution {
    public boolean wordPattern(String pattern, String s) {
        HashMap<Character, String> map = new HashMap<>();
        String[] arr = s.trim().split("\\s+");
        if(pattern.length() != arr.length){
            return false;
        }
        for(int i = 0; i< pattern.length(); i++){
            if(map.containsKey(pattern.charAt(i))){
                if(!map.get(pattern.charAt(i)).equals(arr[i])){
                    return false;
                }
            }else if(map.containsValue(arr[i])){
                return false;
            }else{
                map.put(pattern.charAt(i), arr[i]);
            }
        }
        return true;
    }
}