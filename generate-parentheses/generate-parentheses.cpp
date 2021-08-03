class Solution {
    void solver(vector<string> &result, string str, int OpenCount, int CloseCount, int maxSize){
        
        if(str.size() == 2*maxSize){
            result.push_back(str);
            return;
        }
        
        if(OpenCount < maxSize) solver(result, str + "(", OpenCount + 1, CloseCount, maxSize);
        if(CloseCount < OpenCount) solver(result, str + ")", OpenCount, CloseCount + 1, maxSize);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        solver(result, "", 0, 0, n);
        return result;
    }
};