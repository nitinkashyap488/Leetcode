class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s.length() != t.length()){
            return false;
        }
        // Map<Character, Character> map = new HashMap<>();
        // for(int i = 0; i <s.length(); i++){
        //     if(map.containsKey(s.charAt(i))){
        //         if(map.get(s.charAt(i)) != t.charAt(i)){
        //             return false;
        //         }
        //     }else {
        //         if(map.containsValue(t.charAt(i))){
        //             return false;
        //         }   
        //         map.put(s.charAt(i), t.charAt(i));
        //     }
        // }
        // return true;
        
        int[] m1 = new int[256];
        int[] m2 = new int[256];
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (m1[s.charAt(i)] != m2[t.charAt(i)]) {
                return false;
            }
            
            m1[s.charAt(i)] = i + 1;
            m2[t.charAt(i)] = i + 1;
        }
        
        return true;
    }
}
