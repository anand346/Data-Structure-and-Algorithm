#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int myBucketSort(float a[],int n){
    vector<float> b[n];
    for(int i = 0;i < n;i++){
        int bi = n*a[i];
        b[bi].push_back(a[i]);
    }
    for(int i = 0;i < n;i++){
        sort(b[i].begin(),b[i].end());
    }
    int index = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < b[i].size();j++){
            a[index++] = b[i][j];
        }
    }
}
int main(){
    float arr[] = {0.22,0.12,0.98,0.16,0.83,0.63};
    myBucketSort(arr,6);
    cout<<"Sorted array : "<<endl;
    for(int i = 0;i < 6;i++){
        cout<<arr[i]<<" ";
    }
}