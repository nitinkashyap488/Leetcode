class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int i = 0, j = (int)sqrt(c);
        while(i<=j){
            long long int temp = (i*i +j*j) ;
            if(temp ==c){
                return true;
            }else if(temp<c){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};