class Solution {
public:
    string minRemoveToMakeValid(string str) {
        stack<int> stk;
        for(int i =0; i<str.size();i++){
            if( str[i] == '('){
                stk.push(i);
            }else if(str[i] ==')'){
                if(!stk.empty()){
                    stk.pop();
                }else{
                    str[i] ='*';
                }
            }
        }
        while(!stk.empty()){
            str[stk.top()] = '*';
            stk.pop();
        }
        str.erase(remove(str.begin(), str.end(), '*'), str.end());
        return str;
    }
};