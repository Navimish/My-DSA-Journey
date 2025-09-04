class LRUCache {
public:
    int capacity; 
    list<int> dll; // stores keys
    unordered_map<int, pair<list<int>::iterator, int>> mp; 

    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    void recentlyused(int key) {
        dll.erase(mp[key].first);   // remove old position
        dll.push_front(key);        // move to front
        mp[key].first = dll.begin(); // update iterator
    }
    
    int get(int key) {
        if(mp.find(key) == mp.end()) return -1;
        recentlyused(key);
        return mp[key].second;
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()) {
            // key already exists → update value and move to front
            mp[key].second = value;
            recentlyused(key);
        } else {
            // if cache full → remove LRU
            if(dll.size() == capacity) {
                int lru = dll.back();
                dll.pop_back();
                mp.erase(lru);
            }
            // insert new key
            dll.push_front(key);
            mp[key] = {dll.begin(), value};
        }
    }
};
