class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>num3;
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
               num3.push_back(nums1[i]);
               i++;
            }
            else{
               num3.push_back(nums2[j]);
               j++;
            }
        
        }


        while(i<m){
            num3.push_back(nums1[i]);
               i++;
        }

        while(j<n){
          num3.push_back(nums2[j]);
               j++;
         
        }
        nums1=num3;

    }
    
};
