class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        int top = 0, bottom = n-1, left = 0, right = m-1,count = 0;
        while(top<=bottom and left <=right){
            switch(count){
                case 0: for(int i = left; i <= right; i++){
                            ans.push_back(matrix[top][i]);
                        }
                        top++; count++;
                        break;
                case 1: for(int i = top; i <= bottom; i++){
                            ans.push_back(matrix[i][right]);
                        }
                        right--; count++;
                        break;
                case 2: for(int i = right; i >= left; i--){
                            ans.push_back(matrix[bottom][i]);
                        }
                        bottom--; count++;
                        break;
                case 3: for(int i = bottom; i >= top; i--){
                            ans.push_back(matrix[i][left]);
                        }
                        left++; count = 0;
                        break;
                
            }
        }
        return ans;
    }
};