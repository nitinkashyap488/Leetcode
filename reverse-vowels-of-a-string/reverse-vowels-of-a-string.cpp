class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            return true;
        }else{
            return false;
        }
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(!isVowel(s[i])){
                i++;
            }else if(!isVowel(s[j])){
                j--;
            }else{
                swap(s[i],s[j]);
                i++;j--;
            }
        }
        return s;
    }
};