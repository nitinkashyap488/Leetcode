class Solution {
public:
    vector<vector<string>>ans;
    
    bool ispalindrome(string sub){
        int i=0;
        int j= sub.size()-1;
        while(j>i){
            if(sub[i]!=sub[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
    
    void solution( string s, vector<string> & v){
        if(s.size()==0){
            ans.push_back(v);
            return ;
        }
        for(int i=0;i<s.size();i++)
        {
            string temp=s.substr(0,i+1);
            string rest=s.substr(i+1);
            if(ispalindrome(temp))
            {
                v.push_back(temp);
                solution(rest,v);
                v.pop_back();
            }
        }

    }
    
    vector<vector<string>> partition(string s) {
        vector<string> v;
        solution(s,v);
        return ans;
    }
};