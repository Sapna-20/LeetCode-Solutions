class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if(a.size() > b.size()) return findMedianSortedArrays(b, a);
        int n = a.size(), m = b.size();
        int l = 0, r = n;
        while(l <= r) {
            int i = (l + r) / 2;
            int j = (n + m + 1) / 2 - i;
            
            int aL = (i == 0) ? INT_MIN : a[i - 1];
            int aR = (i == n) ? INT_MAX : a[i];
            int bL = (j == 0) ? INT_MIN : b[j - 1];
            int bR = (j == m) ? INT_MAX : b[j];
            
            if(aL <= bR && bL <= aR) {
                if((n + m) % 2 == 0)
                    return (max(aL, bL) + min(aR, bR)) / 2.0;
                else
                    return max(aL, bL);
            }
            else if(aL > bR) r = i - 1;
            else l = i + 1;
        }
        return 0;
    }
};