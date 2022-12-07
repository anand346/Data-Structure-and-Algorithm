#include<bits/stdc++.h>
using namespace std;

string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {

    map<int,string> hash1,hash2;
    for(int i = 0;i < Q;i++){
        hash1[index[i]] = sources[i];
        hash2[index[i]] = targets[i];
    }

    string output = "";
    int n = S.size();

    for(int i = 0;i < n;i++){
        if(hash1.find(i) == hash1.end()) output += S[i];
        else{
            if(S.compare(i,hash1[i].size(),hash1[i]) == 0){
                output += hash2[i];
                i += hash1[i].length()-1;
            }else{
                output += S[i];
            }
        }
    }

    return output;
}

int main(){
    string S = "gforks";
    int Q = 2;
    int index[] = {0, 4};
    string sources[] = {"g", "ks"};
    string targets[] = {"geeks", "geeks"};
    cout<<findAndReplace(S,Q,index,sources,targets);
}