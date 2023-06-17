//striver

#include<bits/stdc++.h>
using namespace std;


void generateBinaryString(int length,string ans){

    if(length == ans.length()){
        cout<<ans<<endl;
        return;
    }

    generateBinaryString(length,ans+"0");
    generateBinaryString(length,ans+"1");
}

// optimized approach to generate all binary string
void generateBinaryString1(int index,int arr[],int n){

    if(index == n){
        for(int i = 0;i < n;i++){
            cout<<arr[i];
        }
        cout<<endl;
        return;
    }

    arr[index] = 0;
    generateBinaryString1(index+1,arr,n);
    arr[index] = 1;
    generateBinaryString1(index+1,arr,n);
}


void generateBinaryString2(int length,string &temp,vector<string> &ans){

    if(length == temp.length()){
        ans.push_back(temp);
        return ;
    }

    temp.push_back('0');
    generateBinaryString2(length,temp,ans);
    temp.pop_back();
    temp.push_back('1');
    generateBinaryString2(length,temp,ans);
    temp.pop_back();
}

void generateBinaryStringWithoutConsecutiveOne(int length,string ans){

    if(length == ans.length()){
        cout<<ans<<endl;
        return;
    }

    generateBinaryStringWithoutConsecutiveOne(length,ans+"0");
    if(ans.back() != '1'){
        generateBinaryStringWithoutConsecutiveOne(length,ans+"1");
    }
}



int main(){
    int length = 3;
    // int arr[length];
    // string ans = "";
    // generateBinaryString(length,ans);
    
    string temp = "";
    vector<string> ans;
    generateBinaryString2(length,temp,ans);
    for(int i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
    // generateBinaryStringWithoutConsecutiveOne(length,"");
}