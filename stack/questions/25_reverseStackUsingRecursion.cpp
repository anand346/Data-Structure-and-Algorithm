
// https://www.geeksforgeeks.org/reverse-a-stack-using-recursion/
#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :

        void insert_at_bottom(stack<int> &st,int x){
            // if(st.size() == 0 or st.top() < x){ //uncomment this line for sorting
            if(st.size() == 0){ //comment this line when u uncomment above line .
                st.push(x);
            }else{
                int a = st.top();
                st.pop();
                insert_at_bottom(st,x);
                st.push(a);
            }
        }

        void reverse(stack<int> &st){
            if(st.size() > 0){
                int x= st.top();
                st.pop();
                reverse(st);
                insert_at_bottom(st,x);
            }
            return ;
        }
}

int main(){

}