class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1){
            return s;
        }
        bool down = false;
        vector<string> rows(min(n,numRows));
        int curr =0;
        for(auto c:s){
            rows[curr] += c;
            if(curr == 0 || curr == numRows -1){
                down = !down;
            }
            if(down){
                curr += 1;
            }else{
                curr += -1;
            }
        }
        string str;
        for(string row : rows){
            str += row;
        }
        return str;
    }
};