class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> str;
        for(int i=0;i+k<=s.size();i++){
            str.insert(s.substr(i,k));
        }
        if(str.size()<pow(2,k)){
            return false;
        }else{
            return true;
        }
    }
};