class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        
        int jumps = 0;        // number of jumps
        int currentEnd = 0;  // end of current jump range
        int farthest = 0;    // farthest position reachable
        
        // We don't need to go till last index
        for (int i = 0; i < n - 1; i++) {
            
            // Update farthest reach
            farthest = max(farthest, i + nums[i]);
            
            // When current range ends
            if (i == currentEnd) {
                jumps++;               // take a jump
                currentEnd = farthest; // update range
            }
        }
        
        return jumps;
    }
};
