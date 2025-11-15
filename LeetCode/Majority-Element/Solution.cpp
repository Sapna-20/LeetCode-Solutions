class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for(int num : nums) {
            if(count == 0) {
                candidate = num;   // choose new candidate
            }

            if(num == candidate)
                count++;          // same -> support
            else
                count--;          // different -> cancel out
        }

        return candidate; // majority element
    }
};
