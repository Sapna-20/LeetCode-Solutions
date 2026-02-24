class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int n = citations.size();
        
        // Sort first
        sort(citations.begin(), citations.end());
        
        // Check each position
        for (int i = 0; i < n; i++) {
            
            int papersLeft = n - i;
            
            if (citations[i] >= papersLeft) {
                return papersLeft;
            }
        }
        
        return 0;
    }
};
