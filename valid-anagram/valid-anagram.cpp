class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int> f1(26),f2(26);
        for(int i=0;i<s.size();i++){
            f1[s[i]-'a'] +=1;
            f2[t[i]-'a'] +=1;
        }
        if(f1!=f2){
            return false;
        }
        return true;
    }
};