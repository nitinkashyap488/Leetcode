class Solution {
    public void helper(int n,int openCount,int closeCount, String str, List<String> list ){
        if(openCount == n && closeCount == n){
            list.add(str);
            return ;
        }
        if(openCount < n){
            helper(n, openCount + 1, closeCount, str + "(", list);
        }
        if(closeCount < openCount){
            helper(n, openCount, closeCount + 1, str + ")", list);
        }
    }
    public List<String> generateParenthesis(int n) {
        List<String> list = new ArrayList<>();
        helper(n, 0, 0, "", list);
        return list;
    }
}