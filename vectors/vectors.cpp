#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    //don't insert elements in vector by v[3] = 3 this format;
    for(int i = 0;i < v1.size() ;i++){
        cout<<v[i]<<endl;
    }
    v1.empty();
    //v1.clear();
    sort(v1.begin(),v1.end());
    v1.pop_back();
    v1.capacity();
    v1.at(3);
}