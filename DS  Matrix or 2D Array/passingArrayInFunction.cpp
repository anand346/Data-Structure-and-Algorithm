#include <iostream>
using namespace std;
void printArray(int a[][5],int m,int n){
    for(int i =0; i < m;i++){
        for(int j =0; j < n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
//no. of columns declared is compulsory to pass in function
int main(){
    int a[][5] = {
                {1,2},
                {3,4},
                {5,6}
                };
    printArray(a,3,2);
}