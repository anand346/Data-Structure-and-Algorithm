// Input:
// N = 7
// a[] = {2,6,1,9,4,5,3}
// a[] = {22,6,8,9,4,5,3}
// Output:
// 6
// Explanation:
// The consecutive numbers here
// are 1, 2, 3, 4, 5, 6. These 6 
// numbers form the longest consecutive
// subsquence.

#include<bits/stdc++.h>
using namespace std;



int findLongestConseqSubseq(int arr[], int n){
    set<int> s;
    for(int i = 0;i < n;i++){
        s.insert(arr[i]);
    }

    int ans = 0;
    for(int i = 0;i < s.size();i++){
        if(s.find(arr[i]-1) != s.end()){
            continue;
        }else{
            int count = 0;
            int current = arr[i];
            while(s.find(current) != s.end()){
                count++;
                current++;
            }
            ans = max(count,ans);
        }
    }
    return ans;

}

int main(){
    int n = 7;
    int a[] = {22,6,8,9,4,5,3};
    cout<<findLongestConseqSubseq(a,n);
}