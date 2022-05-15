class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i,j;
 int gap=(n+m)/2;
 while(gap>0){
    i = 0;
   j = gap;
   while(j<(n+m)){

  if(i<m && j<m){
   if(nums1[i]>nums1[j]){
       swap(nums1[i],nums1[j]);
   }
  }
   else if(i<m && j>=m){
                        if(nums1[i]>nums2[j-m]){
                           swap(nums1[i],nums2[j-m]);
                        }     
                    }
                    else{
                        if(nums2[i-m]>nums2[j-m]){
                            swap(nums2[i-m],nums2[j-m]);
                            
                            
                        }  
                 }
                  i++;
                    j++;
   }
                    if(gap<=1)
	                gap = 0;
	            else
	                gap = ((gap/2) + (gap%2));
            }   
 }
    
};
