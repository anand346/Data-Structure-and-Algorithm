#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
        int data;
        Node* prev;

        Node(int data){
            this->data = data;
            prev = NULL;
        }
};
class Solution{
    public :
        void multiply(Node *tail,int n){
            Node *temp = tail;
            Node *prevTemp = tail;
            int carry = 0;
            while(temp != NULL){
                int data = temp->data*n + carry;
                temp->data = data%10;
                carry = data/10;
                prevTemp = temp;
                temp = temp->prev;
            }

            while(carry != 0){
                prevTemp->prev = new Node((int)(carry%10));
                carry /= 10;
                prevTemp = prevTemp->prev;
            }
        }  

        void makeVector(Node *tail, vector<int> &ans){
            if(tail == NULL){
                return ;
            }
            makeVector(tail->prev,ans);
            ans.push_back(tail->data);
        }
        vector<int> factorial(int n){
            vector<int> ans;
            Node *tail = new Node(1);
            for(int i = 2;i <= n;i++){
                multiply(tail,i);
            }
            makeVector(tail,ans);
            return ans;
        }
};
// long long factorial(long long n){
//     if(n == 0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int factorial(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
int main(){
    Solution a ;
    vector<int> ans;
    ans = a.factorial(20);
    for(int i = 0;i < ans.size();i++){
        cout<<ans[i];
    }

    // cout<<factorial(20);
}