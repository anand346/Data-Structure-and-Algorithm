// https://youtu.be/LmHWIsBQBU4

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :


        void wordBreak(string str,string ans,unordered_set<string> dict){

            if(str.length() == 0){
                cout<<ans<<endl;
                return ;
            }


            for(int i = 0;i < str.length();i++){
                string left = str.substr(0,i+1);
                if(dict.find(left) != dict.end()){
                    string right = str.substr(i+1);
                    wordBreak(right,ans+left+" ",dict);
                }
            }
        }
};

int main(){

    unordered_set<string> dict = {"i","like","pep","coding","pepper","eating","mango","man","go","in","pepcoding"};
    string str = "ilikepeppereatingmangoinpepcoding";


    Solution s;
    s.wordBreak(str,"",dict);
}