class Solution {
public:
    string sortSentence(string s) {
        map<int, string> mp;
        string str,ans;;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                str += s[i];
            }else if(s[i]>='A' && s[i]<='Z'){
                str += s[i];
            }else if(s[i]>='0' && s[i]<='9'){
                mp.insert({s[i],str});
            }else{
                str.erase();
            }
        }
        for(auto it = mp.begin();it!=mp.end();it++){
            ans += it->second +' ';
        }
        ans.erase(ans.size()-1);
        return ans;
    }
};