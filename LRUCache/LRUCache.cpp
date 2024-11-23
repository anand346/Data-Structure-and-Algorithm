class LRUCache {
public:
    map<int,int> mymap;
    list<int> ls;
    int cp;
    LRUCache(int capacity) {
        cp = capacity;
        mymap.clear();
        ls.clear();
    }
    
    int get(int key) {
        if(mymap.find(key) == mymap.end()) return -1;
        ls.remove(key);
        ls.push_front(key);
        return mymap[key];
    }
    
    void put(int key, int value) {
        if(mymap.find(key) == mymap.end()){
            if(ls.size() == cp){
                /// full
                int last = ls.back();
                ls.pop_back();
                mymap.erase(last);
            }
            mymap[key] = value;
            ls.push_front(key);
            
        }else{
            ls.remove(key);
            ls.push_front(key);
            mymap[key] = value;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */


class LRUCache {
public:
    list<pair<int,int>> l;
        unordered_map<int,list<pair<int,int>>::iterator> m;
        int size;

        LRUCache(int capacity){
            ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
            size = capacity;
        }

        int get(int key){
            if(m.find(key) == m.end()){
                return -1;
            }
            l.splice(l.begin(),l,m[key]);
            return m[key]->second ;
        }

        void put(int key,int value){
            if(m.find(key) != m.end()){
                l.splice(l.begin(),l,m[key]);
                m[key]->second = value;
                return ;
            }

            if(l.size() == size){
                auto d_key = l.back().first;
                l.pop_back();
                m.erase(d_key);
            }

            l.push_front({key,value});
            m[key] = l.begin();
        }
};