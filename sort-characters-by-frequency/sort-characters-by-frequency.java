class Solution {
    public String frequencySort(String s) {
        Map<Character, Integer> frequencyMap = new HashMap<>();
        for (char c : s.toCharArray()) {
            frequencyMap.put(c, frequencyMap.getOrDefault(c, 0) + 1);
        }
        
        List<Character> sortedCharacters = new ArrayList<>(frequencyMap.keySet());
        sortedCharacters.sort((a, b) -> frequencyMap.get(b) - frequencyMap.get(a));
        
        StringBuilder result = new StringBuilder();
        for (char c : sortedCharacters) {
            int frequency = frequencyMap.get(c);
            for (int i = 0; i < frequency; i++) {
                result.append(c);
            }
        }
        
        return result.toString();
    }
}