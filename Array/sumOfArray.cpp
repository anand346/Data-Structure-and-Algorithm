// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"enter size of array"<<endl;
//     cin>>n;
//     int array[n];
//     for(int i = 0;i < n;i++){
//         cout<<"Enter "<<i<<" index value : ";
//         cin>>array[i];
//     }
//     for(int i =0;i < n;i++){
//         sum += array[i];
//     }
//     cout <<"Sum is : "<< sum <<endl;

// }



#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i =0; i< n;i++){
        cin>>a[i];
    }
    int sum =0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    cout<<"Sum of array is : "<<sum<<endl;
}