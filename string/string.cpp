#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string sortLowercase(string s) {
    int charExist[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        charExist[s[i] - 'a']++;
    }
    string res;
    int j = 0;
    while (j < 26) {
        if (charExist[j] == 0) {
            j++;
        }
        else {
            res.push_back(j + 'a');
            charExist[j]--;
        }
    }
    return res;
}

int main(){
    string a = "abc";
    cout<<a<<endl;


    string *sp = new string;
    *sp = "abc";
    cout<<*sp<<endl;
    cout<<sp<<endl;


    //vector string
    vector<string> v;
    v.push_back("hello");
    v.push_back("world");
    for(int i = 0; i < v.size() ; i++){
        sort(v[i].begin(),v[i].end());
        cout<<v[i]<<endl; 
    }


    //getting input


    // string name;
    // cin>>name;
    // cout<<name;


    // getline(cin,name); //take input in string
    // cout<<name<<endl;



    //concatenation of strings
    string s1 = "abc";
    string s2 = "def";
    string s3= s1 + s2 + " hello coding";
    // cout<<s3<<endl;
    // cout<<"Length of s3 is : "<<s3.length()<<endl;
    // cout<<"length of s3 is : "<<s3.size()<<endl;


    cout<<s3.substr(3,5)<<endl;
    cout<<s3.find("hel")<<endl;




    //integer to string
    int s5 = 123;
    string s4;
    s4 = to_string(s5);
    cout<<s4<<endl;


    //string to integer
    string s6 = "12345";
    int s7 = atoi(s6.c_str());
    cout<<s7<<endl;

}