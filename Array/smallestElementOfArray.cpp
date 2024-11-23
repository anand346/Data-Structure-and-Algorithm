#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>> n;
    int a[n];
    for(int i =0;i < n;i++){
        cin>>a[i];
    }
    int smallest = a[0];
    int largest = a[0];
    // int smallest = INT_MAX;
    // int largest = INT_MIN;
    for(int i = 1;i < n;i++){
        if(a[i] < smallest){
            smallest = a[i];
        }
        if(a[i] > largest){
            largest = a[i];
        }
    }
    cout<<"Smallest value is : "<<smallest<<endl;
    cout<<"Largest value is : "<<largest<<endl;
}


