#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int n){
    for(int i  = n-1;i >= 0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {5,3,2,8,7,6};
    reverseArray(arr,6);
}