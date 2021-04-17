class Solution {
public:
    int addDigits(int num) {
        int sum =0, ans;
        while(num>0){
            sum+= num%10;
            num=num/10;
        }
        if(sum>9){
            ans = addDigits(sum);
        }else{
            ans = sum;
        }
        return ans;
    }
};