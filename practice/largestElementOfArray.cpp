#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    for(int i = 0;i < n;i++){
        cout<<"Enter "<<i+1<<"th element : ";
        cin>>a[i];
    }
    int largest = INT_MIN;
    for(int i = 0;i < n;i++){
        if(a[i] > largest){
            largest = a[i];
        }
    }
    cout<<"largest element is : "<<largest;
}