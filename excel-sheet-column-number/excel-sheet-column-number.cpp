class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        int len = columnTitle.length();
        for(int i=0;i<len;i++){
            ans=ans*26+(columnTitle[i]-'A' +1);
        }
        return ans;
    }
};