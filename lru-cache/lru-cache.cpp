class LRUCache {
    list<pair<int,int>> doubleList;
    unordered_map<int,list<pair<int, int>>::iterator> mp;
    int size;
public:
    LRUCache(int capacity) {
        size = capacity;
    }
    
    int get(int key) {
        if(mp.find(key) == mp.end()){
            return -1;
        }
        doubleList.splice(doubleList.begin(), doubleList, mp[key] );
        return mp[key] -> second;
    } 
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()){
            doubleList.splice(doubleList.begin(), doubleList, mp[key]);
            mp[key] -> second = value;
            return;
        }
        
        if(doubleList.size() == size){
            auto temp = doubleList.back().first;
            doubleList.pop_back();
            mp.erase(temp);
        }
        doubleList.push_front({key, value});
        mp[key] = doubleList.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */