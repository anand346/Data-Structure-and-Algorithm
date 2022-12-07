// Input:
// push1(2)
// push1(3)
// push2(4)
// pop1()
// pop2()
// pop2()

// Output:
// 3 4 -1

// Explanation:
// push1(2) the stack1 will be {2}
// push1(3) the stack1 will be {2,3}
// push2(4) the stack2 will be {4}
// pop1()   the poped element will be 3 
// from stack1 and stack1 will be {2}
// pop2()   the poped element will be 4 
// from stack2 and now stack2 is empty
// pop2()   the stack2 is now empty hence -1 .


#include<bits/stdc++.h>
using namespace std;

class TwoStack{
    public :

        int *arr;
        int size;
        int top1,top2;

        TwoStack(int n=100){
            arr = new int[n];
            size = n;
            top1 = -1;
            top2 = size;
        }

        void push1(int element){
            if(top1 < top2-1){
                top1++;
                arr[top1] = element;
            }else{
                cout<<"Stack Overflow";
                exit(1);
            }
        }
        void push2(int element){
            if(top2 >= 0 ){
                top2--;
                arr[top2] = element;
            }else{
                cout<<"Stack Overflow";
                exit(1);
            }
        }
        int pop1(){
            if(top1 >= 0){
                int x = arr[top1];
                top1--;
                return x;
            }else{
                return -1;
            }
        }
        int pop2(){
            if(top2 <= size-1 ){
                int x= arr[top2];
                top2++;
                return x;
            }else{
                return -1;
            }
        }
}
int main(){

}