#include<iostream>
using namespace std;
int removeElement(int a[],int n,int target){
    int count = 0;
    for(int i = 0;i < n;i++){
        if(a[i] != target){
            a[count++] = a[i];
        }
    }
    return count;
}
int main(){
    int a[] = {3,4,5,2,3,5,5,6};
    int in = removeElement(a,8,5);
    for(int i = 0;i < in;i++){
        cout<<a[i]<<" ";
    }
}