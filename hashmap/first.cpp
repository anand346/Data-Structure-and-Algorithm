#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> myMap;
    pair<string,int> p("abc",1);
    myMap.insert(p);

    myMap["hello"] = 2;
    // cout<<myMap["abc"]<<endl;
    // cout<<myMap["hello"]<<endl; // if key is not present in map then [] will push the key in map and the value will be 0;

    cout<<myMap.at("hello")<<endl; //if the key is not present in map then at() will throw error;
    cout<<myMap.at("abc")<<endl;

    //to check whether a key is present or not  use count function of map this returns 0 or 1;

    if(myMap.count("ghi")){
        cout<<"key is present";
    }else{
        cout<<"key is not present";
    }

    //update the value of a key

    myMap["abc"] = 2;

    //to count no. of key,value pair present inside the map we use size();
    cout<<myMap.size()<<endl;

    //to delete a key,value pair from a map we use erase();

    myMap.erase("ghi");
}