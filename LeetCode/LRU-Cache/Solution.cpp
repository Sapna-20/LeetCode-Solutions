1class LRUCache {
2    int capacity;
3
4    unordered_map<int, list<pair<int,int>>::iterator> mp;
5    list<pair<int,int>> dll; // front = most recent
6
7public:
8    LRUCache(int cap) {
9        capacity = cap;
10    }
11
12    int get(int key) {
13        if (mp.find(key) == mp.end())
14            return -1;
15
16        // move to front
17        auto it = mp[key];
18        int value = it->second;
19        dll.erase(it);
20        dll.push_front({key, value});
21        mp[key] = dll.begin();
22
23        return value;
24    }
25
26    void put(int key, int value) {
27        if (mp.find(key) != mp.end()) {
28            dll.erase(mp[key]);
29        }
30        else if (dll.size() == capacity) {
31            auto last = dll.back();
32            mp.erase(last.first);
33            dll.pop_back();
34        }
35
36        dll.push_front({key, value});
37        mp[key] = dll.begin();
38    }
39};
40