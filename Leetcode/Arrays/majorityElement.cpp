class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=1,res=0;
        int ans;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[res]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                res=i;
                count=1;
            }
        }
        count=0;
        for(int i=0;i<n;i++){
            if(nums[res]==nums[i]){
                count++;
            }
        }
        if(count>n/2){
            ans=nums[res];
        }
        return ans; 
        
    }
};