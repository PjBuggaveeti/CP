class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());  //sorting
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
/*
input : [[1,3],[2,6],[8,10],[15,18]]
prev=[1,3]
2<3, so prev.second=max(3,6)
new prev.second=6
intervals[2][0]>prev.second 
8>6, so push_back [1,6] to res
new prev=[8,10]
15>10, so push back [8,10] to res
*/