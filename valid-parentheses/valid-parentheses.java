class Solution {
    public boolean isValid(String s) {
        Stack<Character> stk = new Stack<>();
        for(char ch : s.toCharArray()){
            if(stk.isEmpty()){
                stk.push(ch);
            }else{
                if(stk.peek() == '(' && ch == ')'){
                    stk.pop();
                }else if(stk.peek() == '{' && ch == '}'){
                    stk.pop();
                }else if(stk.peek() == '[' && ch == ']'){
                    stk.pop();
                }else{
                    stk.push(ch);
                }
            }
        }
        return stk.isEmpty();
        
    }
}