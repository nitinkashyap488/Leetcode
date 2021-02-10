class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s={nums.begin(),nums.end()};
        vector<int>num={s.begin(),s.end()};
        int n=num.size();
        if(n<3){
            return num[n-1];
        }else{
            return num[n-3];
        }
    }
};