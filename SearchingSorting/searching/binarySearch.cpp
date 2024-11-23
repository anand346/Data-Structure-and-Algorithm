#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n,int key){
    int s = 0, e = n-1;
    while(s <= e){
        int mid = s+ (e-s)/2;
        if(a[mid] == key){
            return mid;
        }else if(a[mid] > key){
            e = mid -1;
        }else{
            s = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n,key ;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i = 0; i < n;i++){
        cin>>a[i];
    }
    cout<<"Enter key : "<<endl;
    cin>>key;
    int pos = binarySearch(a,n,key);
    cout<<"Key found at : "<<pos<<endl;
}