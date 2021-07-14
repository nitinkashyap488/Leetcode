class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto x: nums){
            int dig =0;
            while(x){
                dig++;
                x=x/10;
            }
            if(dig%2==0){
                count++;
            }
        }
        return count;
    }
};