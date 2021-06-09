class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0],max_ending=nums[0];
        if(nums.size()==1){
            res=nums[0];
        }
        else{
            for(int i=1;i<nums.size();i++){
                max_ending=max(max_ending+nums[i],nums[i]);
                res=max(res,max_ending);
            }
        }
        return res;
    }
};
