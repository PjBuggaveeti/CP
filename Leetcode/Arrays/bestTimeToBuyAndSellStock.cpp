class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0 ||n==1)
            return 0;

        int minTillNow=prices[0];
        int maxGain =0;

        for(int i=1;i<n;i++)
        {
            if((prices[i]-minTillNow)>maxGain)
                maxGain = prices[i]-minTillNow;
            if(prices[i]<minTillNow)
                minTillNow = prices[i];
        }

        return maxGain;
    }
};