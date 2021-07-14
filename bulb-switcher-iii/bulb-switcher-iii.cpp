class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int ans=0,pos=0;
        for(int i=0; i<light.size(); i++){
            pos = max(pos,light[i]);
            if(pos==i+1) ans++;
        }
        return ans;
    }
};