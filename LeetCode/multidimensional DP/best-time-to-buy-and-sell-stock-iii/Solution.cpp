class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1) return 0;

        vector<int> left(n, 0);
        int mn = prices[0];

        for (int i = 1; i < n; i++) {
            if (prices[i] < mn) mn = prices[i];

            int profit = prices[i] - mn;

            if (profit > left[i-1])
                left[i] = profit;
            else
                left[i] = left[i-1];
        }

        vector<int> right(n, 0);
        int mx = prices[n-1];

        for (int i = n-2; i >= 0; i--) {
            if (prices[i] > mx) mx = prices[i];

            int profit = mx - prices[i];

            if (profit > right[i+1])
                right[i] = profit;
            else
                right[i] = right[i+1];
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (left[i] + right[i] > ans)
                ans = left[i] + right[i];
        }

        return ans;
    }
};