class Solution {
public:
    int minAddToMakeValid(string str) {
        stack<char> stk;
        int count = 0;
        for(auto x: str){
            if(!stk.empty()){
                if(x == '('){
                    stk.push(x);
                }else if( x== ')' && stk.top() == '('){
                    stk.pop();
                }else{
                    stk.push(x);
                }
            }else{
                stk.push(x);
            }
        }
        return stk.size();
    }
};