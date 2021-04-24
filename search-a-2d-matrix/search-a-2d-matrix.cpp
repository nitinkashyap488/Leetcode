class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int start =0, end = n*m-1;
        
        if(target<matrix[0][0] || target>matrix[n-1][m-1]){
            return false;
        }
        
        /*
            matrix[mid/m][mid%m] gives coresponding row and column;
        
        */
        
        while(start<=end){
            int mid = start +(end-start)/2;
            if( matrix[mid/m][mid%m] == target){  
                return true;
            }else if( matrix[mid/m][mid%m] > target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return false;
    }
};
