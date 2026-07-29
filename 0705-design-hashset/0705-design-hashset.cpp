class MyHashSet {
public:
    MyHashSet() {
        
    }
    vector<int> hs;
    void add(int key) {
        int c = 0;
        for(auto it : hs)
        {
            if(it == key)
            {
                c++;
            }
        }
        if(c==0)
        {
            hs.push_back(key);
        }
    }
    
    void remove(int key) {
        erase(hs,key);
    }
    
    bool contains(int key) {
        for(auto it : hs)
        {
            if(it == key)
            {
                return true;
            }
        }
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