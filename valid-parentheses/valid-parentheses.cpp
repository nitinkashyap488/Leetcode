class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(!stk.empty()){
                if(s[i]=='('||s[i]=='{'||s[i]=='['){
                    stk.push(s[i]);
                }else{
                    if(s[i]==')' && stk.top()=='('){
                        stk.pop();
                    }else if(s[i]=='}' && stk.top()=='{'){
                        stk.pop();
                    }else if(s[i]==']' && stk.top()=='['){
                        stk.pop();
                    }else{
                        stk.push(s[i]);
                    }
                }
            }else{
                stk.push(s[i]);
            }            
        }
        return stk.empty();
    }
};