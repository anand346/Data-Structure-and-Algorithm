#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> mymap;
    mymap["abc"] = 1;
    mymap["abc1"] = 2;
    mymap["abc2"] = 3;
    mymap["abc3"] = 4;
    mymap["abc4"] = 5;

    for(unordered_map<string,int>::iterator it = mymap.begin(); it != mymap.end(); it++){
        cout<<it->first<<" value : "<<it->second<<endl;
    }

    /*
    ##auto keyword##
    unordered_map<string,int>::iterator ~~ auto;
    auto keyword automatically sense the datatype from right hand side of assignment operator
    so we can also write like this : 
    for(auto it = mymap.begin(); it != mymap.end(); it++){
        cout<<it->first<<" value : "<<it->second<<endl;
    }




    int a = 5;
    cout<<a //5;
    auto a = 5; //auto keyword automatically detects the datatype from right hand side of assignment operator.
    cout<<a //5;
    */

    //iterator used for finding
    //find() and end() both returns an iterator if both returned iterators matched then the key is not exits in map
    unordered_map<string,int>::iterator it = mymap.find("abc");
    mymap.erase(it); //erase method takes 1 argument whether it is a key or an iterator.erase() is also used to empty a map;

    //mymap.erase(mymap.begin(),mymap.end()); this statement will empty the whole map or vector . this does not make any sense for unordered map;
    if(mymap.find("abc") != mymap.end()){
        cout<<"present"<<endl;
    }else{
        cout<<"not present"<<endl;
    }
    //map store values in accordance with sorting of keys
    map<string,int> mymap1;
    mymap1["abc"] = 1;
    mymap1["abc4"] = 5;
    mymap1["abc2"] = 3;
    mymap1["abc3"] = 4;
    mymap1["abc1"] = 2;
    cout<<endl;
    for(map<string,int>::iterator it = mymap1.begin(); it != mymap1.end(); it++){
        cout<<it->first<<" value : "<<it->second<<endl;
    }
    cout<<endl;

    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(4);
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it<<endl;
    }

}