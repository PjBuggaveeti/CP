class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        for(int i=0;i<nums1.size();i++)
        {
            if(find(nums2.begin(),nums2.end(), nums1[i]) !=nums2.end() &&
              find(temp.begin(),temp.end(), nums1[i])==temp.end())
                temp.push_back(nums1[i]);
        }
        return temp;
    }
};