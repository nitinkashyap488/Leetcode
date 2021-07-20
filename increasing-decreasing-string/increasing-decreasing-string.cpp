class Solution {
public:
    
    string sortString(string s) {
        string str;
        vector<int> freq(26,0);
        for(int i = 0; i<s.size();i++){
            freq[s[i] - 'a']++;
        }
        while(str.size()!=s.size()){
            for(int i = 0; i<26;i++){
                if(freq[i]!=0){
                    str+= 'a'+ i;
                    freq[i]--;
                }
            }
            for(int i = 25; i>=0;i--){
                if(freq[i]!=0){
                    str+= 'a'+ i;
                    freq[i]--;
                }
            }
        }
            
        return str;
    }
};