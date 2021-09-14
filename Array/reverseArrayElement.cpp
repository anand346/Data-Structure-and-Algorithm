#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of Array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of Array : "<<endl;
    for(int i = 0;i < n; i++){
        cin>>a[i];
    }
    cout<<"Before reversing "<<endl;
    for(int i = 0;i < n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    cout<<"After reversing "<<endl;
    for(int i = 0;i < n;i++){
        cout<<a[i]<<" ";
    }

}