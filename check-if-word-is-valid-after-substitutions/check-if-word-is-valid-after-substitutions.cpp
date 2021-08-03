class Solution {
public:
    bool isValid(string str) {
        stack<char> stk;
        for(int i =0; i<str.size();i++){
            if(str[i] == 'c'){
                if(!stk.empty() && stk.top()=='b'){
                    stk.pop();
                }else{
                    return false;
                }
                if(!stk.empty() && stk.top()=='a'){
                    stk.pop();
                }else{
                    return false;
                }
            }else{
                stk.push(str[i]);
            }
        }
        return stk.empty();
    }
};