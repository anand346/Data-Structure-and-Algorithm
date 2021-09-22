#include <iostream>
using namespace std;
int main(){

    //initialization of 2d array
    // int b[2][3] = {{1,2,3};{4,5,6}}; // no. of rows is 2 and no. of columns is 3
    // int[][3] = {
    //             {1,2,3};
    //             {4,5,6};
    //             {7,8,9}
    //             }
    //no. of rows is not compulsory but no. of columns is compulsory



    //to make an 2d array with all zeros
    // int a[4][5] = {{0}}; // all elements are zero

    int a[100][100];
    int m,n;
    cin>>m>>n;
    for(int i =0;i < m;i++){
        for(int j =0; j <n; j++){
            cin>>a[i][j];
        }
    }
    for(int i =0;i < n;i++){
        for(int j =0; j <m; j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}