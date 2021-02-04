class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
        set<char> str;
        int maxsize=0;
        int i=0,j=0;
        while(j<s.size()){
            if(str.count(s[j])==0){
                str.insert(s[j]);
                maxsize=max(maxsize,(int)str.size());
                j++;
            }else{
                str.erase(s[i]);
                i++;
            }
        }
        return maxsize;
    }
};