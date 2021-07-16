class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        int res;
        sort(nums.begin(),nums.end());
        if(n<3){
            return [n-1];
        }
        int count =1;
        for(int i=n-2;i>=0;i--){
            if(nums[i+1]!=nums[i]) //if nums are not same increment count by 1
                count++;
            if(count ==3) //this means we have reached 3rd distinct number from end i.e, 3rd max
                 return nums[i];
        }
        return nums[n-1];
    }   
};