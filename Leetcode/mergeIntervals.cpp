class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;
        pair<int,int> prev={intervals[0][0],intervals[0][1]};
        int n=intervals.size();
        for(int i=1;i<n;i++){
            if(intervals[i][0]>prev.second){
                res.push_back({prev.first,prev.second});
                prev={intervals[i][0],intervals[i][1]};
            }
            else{
                prev.second=max(prev.second,intervals[i][1]);
            }
        }
        res.push_back({prev.first,prev.second});
        return res;
    }
};