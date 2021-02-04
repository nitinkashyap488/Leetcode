class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int>m(46,0);   // beacuse maximum sum would be 45(99999=9+9+9+9+9=45)
        int mx=INT_MIN;
        for(int i=lowLimit;i<=highLimit;i++)
        {
             int sum=0,num=i;
             while(num)
             {
                 sum+=num%10;
                  num/=10;
              }
           
            m[sum]++;
            mx=max(mx,m[sum]);
        }
        return mx;
    }
};