#include<bits/stdc++.h>
using namespace std;


class Solution{
    private :
        stack<int> s1,s1;

    public :
        void push(int x){

            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }

            s1.push(x);

            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }

        int pop(){

            if(s1.empty()){
                return s1.top();

            }
            return -1;
        }

}


class Solution{
    private :
        stack<int> s1,s1;

    public :
        void push(int x){

            s1.push(x);
        }

        int pop(){

            if(s1.empty() and s2.empty()){
                return -1;
            }

            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }

            int x = s2.top();
            s2.pop();
            return x;
        }

}



class Solution{
    private :
        stack<int> s;

    public :
        void push(int x){

            s.push(x);
        }

        int pop(){
            
            if(s.empty()){
                return -1;
            }
    
            int x = s.top();
            s.pop();

            if(s.empty()){
                return x;
            }

            int item = pop();

            s.push(x);

            return item;

        }

}

int main(){

}