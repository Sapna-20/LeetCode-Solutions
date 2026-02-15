1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int min_price = prices[0];
5        int maxprof = 0;
6
7        for(int i=1;i<prices.size();i++){
8            maxprof = max(maxprof,prices[i]-min_price);
9            min_price = min(prices[i],min_price);
10        }
11        return maxprof;
12        
13    }
14};