1class Solution {
2public:
3int mySqrt(int x) {
4    if (x == 0) return 0;
5
6    long long left = 1, right = x, ans = 0;
7
8    while (left <= right) {
9        long long mid = left + (right - left) / 2;
10
11        long long sq = mid * mid;
12
13        if (sq == x) {
14            return mid;
15        }
16        else if (sq < x) {
17            ans = mid;     // mid is a possible answer
18            left = mid + 1;
19        }
20        else {
21            right = mid - 1;
22        }
23    }
24
25    return ans;   // integer part of sqrt
26}
27
28};