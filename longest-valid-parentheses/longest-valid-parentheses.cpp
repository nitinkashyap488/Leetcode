class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> str;
        str.push(-1);
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                str.push(i);
            }else{
                str.pop();
                if(str.empty()){
                    str.push(i);
                }else{
                    ans = max(ans,i- str.top());
                }
            }
        }
        return ans;
    }
};