#include<bits/stdc++.h>
using namespace std;

void isSubsequence(string str1,string str2,string &result){


    int m = str1.length();
    int n = str2.length();
    int j = 0;

    for(int i = 0;i < n && j < m;i++){
        if(str1[j] == str2[i]){
            j++;
        }
    }
    
    if(j == m && result.length() < str1.length()){
        result = str1;
    }
}

string findLongestWord(string str,vector<string> words){

    string result = "";
    sort(words.begin(),words.end());
    for(string word : words){
        isSubsequence(word,str,result);
    }

    
    return result;
}
int main(){
    vector<string> hello = {"ale", "apple", "monkey", "plea"};
    string s = "abpcplea";

    cout<<findLongestWord(s,hello);

}