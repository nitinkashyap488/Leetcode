class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int arr[m+n];
        int i=0,j=0,k=0;
        while(i<m&&j<n){
            if(nums1[i]<nums2[j]){
                arr[k]=nums1[i];
                i++;
            }else{
                arr[k]=nums2[j];
                j++;
            }
            k++;
        }
        while(i<m){
            arr[k]=nums1[i];
            i++;k++;
        }
        while(j<n){
            arr[k]=nums2[j];
            j++;k++;
        }
        if((m+n)%2!=0){
            return arr[(m+n)/2];
        }else{
            int x=(m+n)/2;
            double a = arr[x];
            double b = arr[x-1];
            return (a+b)/2;
        }
    }
};