class Solution {
public:
    bool isPerfectSquare(int num) {
        
//         1 = 1
//         1+3 = 4
//         1+3+5 = 9
//         1+3+5+7 = 16
//         1+3+5+7+9 = 25
        
        long long int ptr = 0,i = 1;
        while(ptr<=num){
            ptr += (2*i - 1);
            if(ptr == num){
                return true;
            }
            i++;
        }
        return false;
    }
};