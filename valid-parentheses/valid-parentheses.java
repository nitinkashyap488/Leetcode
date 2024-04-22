class Solution {
    public boolean isValid(String s) {
        Stack<Character> stk = new Stack();
        for(int i = 0; i < s.length(); i++){
            if(!stk.isEmpty() && stk.peek() == '(' && s.charAt(i) == ')'){
                stk.pop();
            }else if(!stk.isEmpty() && stk.peek() == '{' && s.charAt(i) == '}'){
                stk.pop();
            }else if(!stk.isEmpty() && stk.peek() == '[' && s.charAt(i) == ']'){
                stk.pop();
            }else{
                stk.push(s.charAt(i));
            }
        }
        return stk.isEmpty();
    }
}