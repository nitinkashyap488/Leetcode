class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int count = 0,num = 1;
        int top = 0, bottom = n-1, left = 0, right = n-1;
        while(top<=bottom and left <=right){
            switch(count){
                case 0: for(int i = left; i <= right; i++){
                            ans[top][i] = num;
                            num++;
                        }
                        top++; count++;
                        break;
                case 1: for(int i = top; i <= bottom; i++){
                            ans[i][right] = num;
                            num++;
                        }
                        right--; count++;
                        break;
                case 2: for(int i = right; i >= left; i--){
                            ans[bottom][i]=num;
                            num++;
                        }
                        bottom--; count++;
                        break;
                case 3: for(int i = bottom; i >= top; i--){
                            ans[i][left] = num;
                            num++;
                        }
                        left++; count = 0;
                        break;
            }
        }
        return ans;
    }
};