class Solution {
public:
    bool canJump(vector<int>& nums) {
        int iZero = -1;
        for(int i = nums.size() - 2; i >= 0; i--) {
            if(!nums[i] && iZero == -1) iZero = i;
            if(iZero - i < nums[i]) iZero = -1;
        }
        return iZero == -1;
    }
};