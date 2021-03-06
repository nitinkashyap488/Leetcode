class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str;
        while(columnNumber--){
            str+=char('A' + columnNumber%26);
            columnNumber/=26;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};