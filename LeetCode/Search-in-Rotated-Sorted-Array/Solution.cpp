1class Solution {
2public:
3   int search(vector<int>& a, int x) {
4    int l = 0, r = a.size() - 1;
5
6    while (l <= r) {
7        int m = (l + r) / 2;
8
9        if (a[m] == x) return m;
10
11        if (a[l] <= a[m]) {
12            if (x >= a[l] && x < a[m]) r = m - 1;
13            else l = m + 1;
14        } else {
15            if (x > a[m] && x <= a[r]) l = m + 1;
16            else r = m - 1;
17        }
18    }
19    return -1;
20}
21
22};