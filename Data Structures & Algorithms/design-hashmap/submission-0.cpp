class MyHashMap {
public:
    vector<pair<int,int>>v;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        if(v.size()==0){
            v.push_back({key,value});
        }
        else {
            for(int i=0;i<v.size();i++){
                if(v[i].first==key){
                    v[i].second = value;
                    return;
                }
            }
            v.push_back({key,value});
        }
    }
    
    int get(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i].first==key){
                return v[i].second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i].first==key){
                v.erase(v.begin()+i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */