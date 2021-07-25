class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int flag = 0;
        for(int i =0; i <num.size();i++){
            int x = num[i] - '0';
            if(x<change[x]){
                flag = 1;
                num[i] = (char)(change[x]+48);
            }else if(x > change[x]){
                if(flag == 1){
                    return num;
                }
            }
        }
        return num;
    }
};