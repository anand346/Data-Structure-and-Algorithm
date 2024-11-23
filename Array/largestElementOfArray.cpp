#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int n;
    int largest = INT_MIN;
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int a[n];
    for(int i =0 ; i < n; i++){
        cout <<"Enter "<<i<<" index value : ";
        cin>>a[i];
    }
    for(int i = 0;i < n; i++){
        if(a[i]  > largest ){
            largest = a[i];
        }
    }
    cout<<"Largest element is :"<<largest;
}