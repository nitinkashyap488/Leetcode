class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        unordered_map<long, int> mp;
        
        if(numerator == 0) return "0";
        string ans = (numerator < 0) ^ (denominator < 0)? "-": "";
        
        long n = abs(numerator);
        long d = abs(denominator);
        
        ans += to_string(n/d);
        n %= d;
        
        if(n){
            ans += ".";
            while(n and mp.find(n) == mp.end()){
                mp[n] = ans.size();
                n = n*10;
                ans += to_string(n/d);
                n %= d;
            }
            if(n){
                ans = ans.substr(0,mp[n]) + "(" + ans.substr(mp[n]) + ")";
            }
        }
        return ans;
    }
};