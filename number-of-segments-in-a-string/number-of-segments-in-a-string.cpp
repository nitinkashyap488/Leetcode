class Solution {
public:
    int countSegments(string s) {
        if(s.empty()){
            return 0;
        }
        int count=0;
        for(int i=0 ;i<s.size()-1;i++){
            if(s[i]!=' ' && s[i+1]==' '){
                count++;
            }
        }
        if(s[s.size()-1]!=' '){
            count++;
        }
        return count;
    }
};