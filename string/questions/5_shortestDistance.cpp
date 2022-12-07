#include<bits/stdc++.h>
using namespace std;

int shortestDistance(vector<string> s,string first,string sec){

    int firstPlace = -1;
    int secondPlace = -1;
    int minVal = INT_MAX;
    for(int i = 0;i < s.size();i++){
        if(s[i] == first){
            firstPlace = i;
        }

        if(s[i] == sec){
            secondPlace = i;
        }
        if(firstPlace != -1 && secondPlace != -1){
            minVal = min(minVal,abs(firstPlace - secondPlace));
        }
    }
    return minVal;
}
int main(){
    vector<string> s = { "the", "quick", "brown", "fox","quick"};
    int out = shortestDistance(s,"the","fox");
    cout<<out;
}