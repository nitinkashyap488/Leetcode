class Solution {
public:
    vector<int> closestDivisors(int num) {
        vector<int> ans;
        int m = INT_MAX;
        int num1 = num + 1;
        int num2 = num + 2;
        for(int i = 1;i*i<=num1;i++){
            if(num1%i == 0){
                int diff = (num1/i -i);
                if(diff<m){
                    m = diff;
                    ans.clear();
                    ans.push_back(i);
                    ans.push_back(num1/i);
                }
            }
        }
        for(int i = 1;i*i<=num2;i++){
            if(num2%i == 0){
                int diff = (num2/i -i);
                if(diff<m){
                    m = diff;
                    ans.clear();
                    ans.push_back(i);
                    ans.push_back(num2/i);
                }
            }
        }
        return ans;
    }
};