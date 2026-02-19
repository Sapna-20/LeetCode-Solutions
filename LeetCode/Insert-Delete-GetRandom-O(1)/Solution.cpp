class RandomizedSet {
    
    vector<int> arr;                 // stores values
    unordered_map<int,int> pos;      // value -> index
    
public:
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        
        // already present
        if (pos.count(val)) 
            return false;
        
        // add at end
        arr.push_back(val);
        
        // save position
        pos[val] = arr.size() - 1;
        
        return true;
    }
    
    bool remove(int val) {
        
        // not present
        if (!pos.count(val)) 
            return false;
        
        int index = pos[val];        // position of val
        int last = arr.back();       // last element
        
        // move last to this position
        arr[index] = last;
        pos[last] = index;
        
        // remove last
        arr.pop_back();
        pos.erase(val);
        
        return true;
    }
    
    int getRandom() {
        
        int idx = rand() % arr.size();
        return arr[idx];
    }
};
