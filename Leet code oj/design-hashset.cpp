class MyHashSet {
public:
    bool cnt[1000005];
    MyHashSet() {
        memset(cnt, 0, sizeof(cnt));
    }
    
    void add(int key) {
        cnt[key] = 1;
    }
    
    void remove(int key) {
        cnt[key] = 0;
    }
    
    bool contains(int key) {
        if(cnt[key])   return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
