#include <iostream>
using namespace std;
int length(char input[]){
    int count = 0;
    for(int i =0;i < input[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char a[100];
    cout<<"Enter your name : ";
    cin.getline(a,100);
    cout<<"Before reverse : "<<a<<endl;
    int start = 0;
    int end = length(a)-1;
    while(start <= end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    cout<<"After reverse : "<<a<<endl;
    return 0;
}