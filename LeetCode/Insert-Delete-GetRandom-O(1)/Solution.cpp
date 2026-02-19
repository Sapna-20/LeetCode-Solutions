class RandomizedSet {
private:
    vector<int> nums;                  // store values
    unordered_map<int, int> mp;        // value -> index in vector

public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        // If already exists, return false
        if (mp.find(val) != mp.end()) {
            return false;
        }
        
        // Add to vector
        nums.push_back(val);
        
        // Store index
        mp[val] = nums.size() - 1;
        
        return true;
    }
    
    bool remove(int val) {
        // If not present, return false
        if (mp.find(val) == mp.end()) {
            return false;
        }
        
        // Get index of element to remove
        int index = mp[val];
        
        // Get last element
        int lastElement = nums.back();
        
        // Move last element to removed position
        nums[index] = lastElement;
        
        // Update map for last element
        mp[lastElement] = index;
        
        // Remove last element
        nums.pop_back();
        
        // Remove from map
        mp.erase(val);
        
        return true;
    }
    
    int getRandom() {
        int randomIndex = rand() % nums.size();
        return nums[randomIndex];
    }
};
