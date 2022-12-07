#include<bits/stdc++.h>
using namespace std;


bool isValid(string str){
    
    int counter = 0;

    for(int i = 0;i < str.length();i++){
        if(str[i] == '.'){
            counter++;
        }
    }
    if(count != 3){
        return false;
    }

    counter = 0;
    unordered_set<string> st;
    for(int i = 0;i < 256;i++){
        st.insert(to_string(i));
    }

    string temp = "";

    for(int i = 0;i < str.length();i++){
        if(str[i] != '.'){
            temp = temp+str[i];
        }else{
            if(st.count(temp) != 0){
                counter++;
                temp = "";
            }
        }
    }

    if(st.count(temp) != 0) counter++;
    if(counter != 4){
        return false;
    }else{
        return true;
    }
}
int main(){
    

}