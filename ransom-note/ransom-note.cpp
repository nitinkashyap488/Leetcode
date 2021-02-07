class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26);
        for(auto i:ransomNote){
            v[i-'a']++;
        }
        for(auto i:magazine){
            v[i-'a']--;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]>0){
                return false;
            }
        }
        return true;
    }
};