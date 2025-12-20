class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

    unordered_set<int> s;

    // Step 1: store all elements in HashSet
    for (int x : nums) {
        s.insert(x);
    }

    int longest = 0;

    // Step 2: check each number
    for (int x : s) {

        // START condition: x-1 should NOT exist
        if (s.find(x - 1) == s.end()) {

            int current = x;
            int count = 1;

            // expand forward
            while (s.find(current + 1) != s.end()) {
                current++;
                count++;
            }

            longest = max(longest, count);
        }
        // else → SKIP (do nothing)
    }

    return longest;
}
};
