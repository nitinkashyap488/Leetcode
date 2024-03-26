class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }
        Arrays.sort(strs);
        String firstStr = strs[0];
        String lastStr = strs[strs.length - 1];
        StringBuilder sb = new StringBuilder();
        int minLength = Math.min(firstStr.length(), lastStr.length());
        for (int i = 0; i < minLength; i++) {
            if (firstStr.charAt(i) == lastStr.charAt(i)) {
                sb.append(firstStr.charAt(i));
            } else {
                break;
            }
        }
        return sb.toString();
    }
}