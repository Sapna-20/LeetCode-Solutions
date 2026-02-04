1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        priority_queue<int, vector<int>, greater<int>> pq;
5        
6        for(int x : nums) {
7            pq.push(x);
8            
9            if(pq.size() > k) {
10                pq.pop();   // remove smallest
11            }
12        }
13        
14        return pq.top();
15    }
16};
17