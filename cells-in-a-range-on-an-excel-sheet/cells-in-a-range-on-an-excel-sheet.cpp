class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        
        int row1 = s[1] - '0';
        int row2 = s[4] - '0';
        
        int col1 = s[0] - 'A';
        int col2 = s[3] - 'A';
        
        for(auto c = s[0]; c <= s[3]; c++){
            for(int i = row1; i<= row2; i++){
                string b = to_string(i);
                string str = c + b;
                ans.push_back(str);
            }
        }
        
        return ans;
    }
};