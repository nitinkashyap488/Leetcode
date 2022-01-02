class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.empty()){
            return s.empty();
        }
        
        bool match = s.size() > 0 and ((s[0] == p[0]) or (p[0] == '.'));
        if(p.size() > 1 && p[1] == '*'){
            return isMatch(s,p.substr(2)) or (match and isMatch(s.substr(1),p));
        }else{
            return match and isMatch(s.substr(1),p.substr(1));
        }
    }
};


// one Liner Solution 

// class Solution {
// public:
//     bool isMatch(string s, string p) {
//         return regex_match(s,regex(p));
//     }
// };