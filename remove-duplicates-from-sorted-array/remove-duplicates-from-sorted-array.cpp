class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int j=0, count;
        if(nums.size() == 0)
        {
            count = NULL;
        }
        else{
        count=1;
            int i=1;
        while(i<nums.size()) 
        {
            if(nums[j] != nums[i])
            {
                nums[++j] = nums[i];
                count++;
                
            }
            i++;
        }
        }
        return count;

    }
};

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int count=0;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]==nums[i-1]){
//                 count++;
//             }else{
//                 nums[i-count]=nums[i];
//             }
//         }
//         int n=nums.size()-count;
//         return n;
//     }
// };