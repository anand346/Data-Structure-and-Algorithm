#include<bits/stdc++.h>
using namespace std;

// string str = "amazon";

int checkRotation(string str1,string str2){

    int len1 = str1.length();
    int len2 = str2.length();

    if(len1 < 2 || len2 < 2){
        if(str1 == str2){
            return true;
        }else{
            return false;
        }
    }

    string temp1,temp2;

    temp1.append(str1.substr(2,len1-2));
    temp1.append(str1.substr(0,2));
    cout<<temp1<<endl;

    temp2.append(str2.substr(len1-2,2));
    temp2.append(str2.substr(0,len1-2));
    cout<<temp2<<endl;

    if(temp1 == str2 || temp2 == str2){
        return true;
    }else{
        return false;
    }
}
int main(){

    string str1 = "amazon";
    string str2 = "azonam";

    cout<<checkRotation(str1,str2);
}