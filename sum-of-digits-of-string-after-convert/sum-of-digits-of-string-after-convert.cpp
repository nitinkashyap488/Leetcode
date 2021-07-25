class Solution {
    long long int solve(string s){
        long long int n =0;
        for(auto x: s){
            n += x-'0';
        }
        return n;
    }
public:
    int getLucky(string s, int k) {
        string res ;
        for(auto x: s){
            res+= to_string(x-'a' + 1);
        }
        long long int n = 0;
        while(k>0){
            n = solve(res);
            res = to_string(n);
            k--;
        }
        
        return n;
    }
};