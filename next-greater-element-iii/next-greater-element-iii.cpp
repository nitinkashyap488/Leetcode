class Solution {
public:
    int nextGreaterElement(int n) {
        string str = to_string(n);
        if(next_permutation(str.begin(),str.end())){
            long num = stol(str);
            if(num > INT_MAX){
                return -1;
            }else{
                return num;
            }
        }
        return -1;
    }
};