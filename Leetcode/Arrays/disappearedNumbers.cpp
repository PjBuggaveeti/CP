class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> temp;
        map<int, int>m;
        for(auto i:nums)
            m[i]++;
        for(int i=1;i<=nums.size();i++){
            if(m.find(i)==m.end())
                temp.push_back(i);
        }
        return temp;
    }
};