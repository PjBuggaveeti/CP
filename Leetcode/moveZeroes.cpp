class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ptr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[ptr++]=nums[i];  //moving non zero elements to beginning
            }
        }
        while(ptr<nums.size()){
            nums[ptr++]=0; //moving 0's to end
        }
    }
};