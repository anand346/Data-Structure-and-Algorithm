// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter length of array : "<<endl;
//     cin>>n;
//     int a[n];
//     cout<<"Enter elements of arary"<<endl;
//     for(int i = 0; i < n; i++){
//         cin>>a[i];
//     }
//     cout<<"Normal print"<<endl;
//     for(int i = 0; i < n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Printing aray in reverse order"<<endl;
//     for(int i = n-1; i >= 0;i--){
//         cout<<a[i]<<" ";
//     }
// }

#include <iostream>
using namespace std;
void reversePrint(int a[],int n){
    if(n <= 0){
        return ;
    }
    reversePrint(a+1,n-1);
    cout<<a[n-1]<<" ";
}
int main(){
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i =0; i < n; i++){
        cin>>a[i];
    }
    // cout<<"Printing reverse of array : "<<endl;
    // for(int i = n-1; i >= 0; i--){
    //     cout<<a[i];
    // }
    reversePrint(a,n);
}