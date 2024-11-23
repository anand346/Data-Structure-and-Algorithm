#include<bits/stdc++.h>
using namespace std;


vector<int> nextPermu(vector<int> &A){

    int ind = -1;

    for(int i = n-2;i >= 0;i--){
        if(A[i] < A[i+1]){
            ind == i;
            break;
        }
    }
    // if breakpoint not found
    if(ind == -1){
        reverse(A.begin(),A.end());            // {0,1,2,3,4,5,6}
        return A;                              // {1,2,3,1,3,5,4}
                                               // {1,2,3,4,1,5,3}
    }
    //if breakpoint found
    for(int i = n-1;i > ind;i--){
        if(A[i] > A[ind]){
            swap(A[i],A[ind]);
            break;
        }
    }
    reverse(A.begin()+ind+1,A.end());
    return A;
}

int main(){

}