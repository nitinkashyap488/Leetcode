////////////////// Sieve of Eratosthenes ////////////////

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n,false);
        
        for(int i = 2;i*i<prime.size();i++){
            if(!prime[i]){
                for(int j = i; i*j < prime.size();j++){
                    prime[i*j] = true;
                }
            }
        }
        int count = 0;
        for(int i =2;i<prime.size();i++){
            if(!prime[i]){
                count++;
            }
        }
        return count;
    }
};

//////////////// NORMAL APPROACH //////////////////////////

// class Solution {
// public:
//     int countPrimes(int n) {
//         if(n<2){
//             return 0;
//         }
//         vector<int> ans;
//         for(int i=2;i<=n;i++){
//             int flag =0;
//             for(int j=2;j<=sqrt(i);j++){
//                 if(i%j==0){
//                     flag = 1;
//                     break;
//                 }
//             }
//             if(flag==0){
//                 ans.push_back(i);
//             }
//         }
//         if(ans[ans.size()-1]==n){
//             return ans.size()-1;
//         }else{
//             return ans.size();
//         }
//     }
// };