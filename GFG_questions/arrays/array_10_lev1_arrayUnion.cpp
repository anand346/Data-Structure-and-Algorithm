// Input:
// 5 3
// 1 2 3 4 5
// 1 2 3
// Output: 
// 5
// Explanation: 
// 1, 2, 3, 4 and 5 are the
// elements which comes in the union set
// of both arrays. So count is 5.

#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
    set<int> st;
    int totalIndex = 0;
    for(int i = 0;i < n;i++){
        st.insert(a[i]);
        totalIndex++;
    }
    for(int i = 0;i < m;i++){
        if(st.find(b[i]) == st.end() ){
            st.insert(b[i]);
            totalIndex++;
        }
    }
    return totalIndex;
}
int main(){
    int arr[] = {85,25,1,32,54,6};
    int arr1[] = {85,2};
    cout<<doUnion(arr,6,arr1,2);
}