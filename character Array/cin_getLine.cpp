#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int myStr(char input[]){
    int length = 0;
    for(int i = 0;input[i] != '\0';i++){
        length++;
    }
    return length;
}
int main(){
    char name[10];
    cin.getline(name,10,'\n');
    cout<<name<<endl;
    // cin>>name;
    cout<<myStr(name);
}

//it is always recommended to use cin.getline() to take input in character array .
//strlen do nothing but gives the index of null character
//whenever the delimitor occurs then null character automatically appended 
//null character only append when delimitor occurs (not automatically at the last index of array at the time of array initialization)