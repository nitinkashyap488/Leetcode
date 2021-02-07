class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string str;
        if(s.empty()){
            return true;
        }
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        int a=0, b=str.size()-1;
        while(a<b){
            if(str[a]!=str[b]){
                return false;
            }
            a++;b--;
        }
        return true;
    }
};