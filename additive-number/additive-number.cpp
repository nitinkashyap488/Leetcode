class Solution {
    bool solve(long long int n1, long long int n2, string str, bool found){
        if(str.size() == 0 && found){      /// if found is true, we reached last;
            return true;                   ///else string break in the start;
        }
        string n3 = to_string(n1+n2);
        int idx = min(str.size(), n3.size());
        if(str.substr(0,idx)==n3){
            return solve(n2,stol(n3),str.substr(idx),true);
        }
        return false;
    }
    
public:
    bool isAdditiveNumber(string nums) {
        for(int i =1; i<nums.size()-1;i++){
            long long int n1 = stol(nums.substr(0,i));
            if(to_string(n1)!= nums.substr(0,i)){        /// to avoid leading 0;
                break;
            }
            for(int j =i+1; j<nums.size(); j++){
                long long int n2 = stol(nums.substr(i,j-i));
                if(to_string(n2)!= nums.substr(i,j-i)){        /// to avoid leading 0;
                    break;
                }
                if(solve(n1,n2,nums.substr(j),false)){
                    return true;
                }
            }
        }
        return false;
    }
};