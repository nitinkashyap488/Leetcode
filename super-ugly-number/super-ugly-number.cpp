class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        set<long> possible,fix;
        possible.insert(1);
        while(fix.size()!=n){
            long nextUgly = *possible.begin();
            fix.insert(nextUgly);
            possible.erase(nextUgly);
            for(int i=0; i<primes.size();i++){
                possible.insert(primes[i]*nextUgly);
            }
        }
        return *fix.rbegin();
    }
};