// https://youtu.be/ygmnqSHiakQ

#include<bits/stdc++.h>
using namespace std;

string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {

    string original = S;
    int newLength = 0;
    for(int i = 0;i < Q;i++){
        auto found = original.find(sources[i]);

        while(found != string::npos){
            if(found == index[i]){
                S.replace(found+newLength,sources[i].size(),targets[i]);
                newLength += targets[i].size()-sources[i].size();
            }

            found = original.find(sources[i],found+1);
        }
        
    }
    return S;
}

int main(){
    string S = "gforks";
    int Q = 2;
    int index[] = {0, 4};
    string sources[] = {"g", "ks"};
    string targets[] = {"geeks", "geeks"};
    cout<<findAndReplace(S,Q,index,sources,targets);
}