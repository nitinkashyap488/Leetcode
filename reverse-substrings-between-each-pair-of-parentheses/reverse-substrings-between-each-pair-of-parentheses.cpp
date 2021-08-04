class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> stk;
        for(int i =0; i<s.size();i++){
            if(s[i]==')'){
                string str;
                while(stk.top()!= '('){
                    str += stk.top();
                    stk.pop();
                }
                stk.pop();
                
                for(auto x: str){
                    stk.push(x);
                }
            }else{
                stk.push(s[i]);
            }
        }
        string res;
        while(!stk.empty()){
            res = stk.top() + res;
            stk.pop();
        }
        return res;
    }
};