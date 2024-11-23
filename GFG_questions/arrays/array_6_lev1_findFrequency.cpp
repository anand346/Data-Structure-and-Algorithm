// Input:
// N = 5
// vector = {1, 1, 1, 1, 1}
// X = 1
// Output: 
// 5
// Explanation: Frequency of 1 is 5.



#include<bits/stdc++.h>
using namespace std;
int findFrequency(vector<int> v, int x){
    // Your code here
    sort(v.begin(),v.end());
    int freq = 0;
    for(int i = 0;i < v.size();i++){
        if(v[i] == x){
            freq++;
        }
    }
    return freq;
}
int main(){
    vector<int> arr = {1, 1, 1, 1, 1};
    cout<<findFrequency(arr,1);
}