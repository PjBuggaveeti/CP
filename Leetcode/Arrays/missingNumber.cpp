class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0,actual=0;
        for(int i=0;i<=n;i++){
            actual+=i;
        }
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return actual-sum;
    }
};