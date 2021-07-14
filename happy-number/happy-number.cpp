class Solution {
public:
    unordered_map<int,bool>map;
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        if(map[n]==true){
            return false;
        }
        map[n] = true;
        int sum =0;
        while(n>0){
            int dig = n%10;
            sum += dig*dig;
            n = n/10;
        }
        return isHappy(sum);
    }
};