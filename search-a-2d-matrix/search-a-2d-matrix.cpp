class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i, start =0, end = m-1;
        if(target<matrix[0][0] || target>matrix[n-1][m-1]){
            return false;
        }
        for(i=0;i<n;i++){
            if(target <= matrix[i][end]){
                break;
            }
        }
        while(start<=end){
            int mid = start +(end-start)/2;
            if(matrix[i][mid]==target){
                return true;
            }else if(matrix[i][mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return false;
    }
};