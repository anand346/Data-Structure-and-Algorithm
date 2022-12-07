#include<bits/stdc++.h>
using namespace std;


class LRUCache{

    private :
        list<int> dq;

        unordered_map<int,list<int>::iterator> mp;
        int csize;

    public :
        LRUCache(int);
        void refer(int);
        void display();

};

LRUCache::LRUCache(int n){
    csize = n;
}

void LRUCache::refer(int x){
     

     if(mp.find(x) == mp.end()){

        if(csize == dq.size()){

            int last = dq.back();

            dq.pop_back();

            mp.erase(last);
        }
     }else{
        dq.erase(mp[x]);
     }

     dq.push_front(x);
     mp[x] = dq.begin();
}

int LRUCache::display(){

    for(auto it = dq.begin();it != dq.end();it++){
        cout<<(*it)<<" ";
    }
}