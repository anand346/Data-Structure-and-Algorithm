#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter your name : ";
    cin>>str;
    for(int i = 0; i < strlen(str); i++){
        for(int j = strlen(str) -1; j >= (strlen(str) - i) - 1; j--){
            if(j < 0){
                return 0;
            }else{
                cout<<str[j]<<" ";
            }
        }
        cout<<endl;
    }
}