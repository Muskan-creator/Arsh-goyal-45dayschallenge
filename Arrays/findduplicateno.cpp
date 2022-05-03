class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        int cnt=0;
        for(int i=0;i<=nums.size()-1;i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second>1){
               cnt= i.first;
                break;
            }
        }
        return cnt;
        
    }
};
