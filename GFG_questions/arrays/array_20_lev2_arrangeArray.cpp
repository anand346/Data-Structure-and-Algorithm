// Input: 
// N = 9
// Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
// Output:
// 9 -2 4 -1 5 -5 0 -3 2

#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n1) {
    vector<int> pos;
    vector<int> neg;

    for(int i= 0;i < n1;i++){
        if(arr[i] >= 0){
            pos.push_back(arr[i]);
        }else{
            neg.push_back(arr[i]);
        }
    }

    int p = 0;int n = 0;int ind = 0;
    while(p < pos.size() && n < neg.size()){
        arr[ind] = pos[p];
        ind++;
        p++;

        arr[ind] = neg[n];
        ind++;
        n++;
    }
    while(p < pos.size()){
        arr[ind] = pos[p];
        ind++;
        p++;
    }

    while(n < neg.size()){
        arr[ind] = neg[n];
        ind++;
        n++;
    }

}
int main(){
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n = 10;
    rearrange(arr,n);
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }

}