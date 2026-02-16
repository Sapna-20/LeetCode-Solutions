1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int iZero = -1;
5        for(int i=nums.size() -2; i>=0; i--) {
6            if(!nums[i] && iZero == -1) iZero = i;
7            if(iZero - i < nums[i]) iZero = -1;
8
9        }
10        return iZero == -1;
11    }
12};