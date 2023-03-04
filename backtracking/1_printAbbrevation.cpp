// https://youtu.be/LliQjLnbhx8

#include<bits/stdc++.h>
using namespace std;


void solution(string str,string asf,int count,int pos){

    if(str.length() == pos){

        if(count == 0){
            cout<<asf<<endl;
        }else{
            cout<<asf+char('0'+count)<<endl;
        }

        return ;

    }
    if(count > 0){
        solution(str,asf+char('0'+count)+str[pos],0,pos+1);
    }else{
        solution(str,asf+str[pos],0,pos+1);
    }
    
    solution(str,asf,count+1,pos+1);

}

int main(){
    string s = "pep";
    solution(s,"",0,0);

}