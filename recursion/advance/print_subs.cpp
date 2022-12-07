#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_subs(string input,string output){
    if(input.length() == 0){
        cout<<output<<endl;
        return;
    }
    print_subs(input.substr(1),output + input[0]); //including
    print_subs(input.substr(1),output); //excluding
}
void store_subs(string input,string output,vector<string> &v){
    if(input.length() == 0){
        v.push_back(output);
        return;
    }
    store_subs(input.substr(1),output + input[0],v);
    store_subs(input.substr(1),output,v);
}
void print_subs2(char input[], char output[], int i){
    if(input[0] == '\0'){
        output[i] = '\0';
        cout<<output<<endl;
        return;
    }
    /// excluding
    print_subs2(input + 1, output, i);
    /// including
    output[i] = input[0];
    print_subs2(input + 1, output, i+1);

}

int main(){
    string name = "ab";
    string output = "";
    print_subs(name,output);


    // string name = "ab";
    // string output = "";
    // vector<string> v;
    // store_subs(name,output,v);
    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i]<<endl;
    // }
    
    // char name[100] = "ab";
    // char output[100];
    // store_subs2(name,output,0);
}