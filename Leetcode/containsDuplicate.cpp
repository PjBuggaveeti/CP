class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
        }
        if(count>=1){
            return true;
        }
        else{
            return false;
        }
        
    }
};