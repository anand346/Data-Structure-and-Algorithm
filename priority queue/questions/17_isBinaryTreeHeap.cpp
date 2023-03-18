// https://www.youtube.com/watch?v=IImt52DavrI

#include<bits/stdc++.h>
using namespace std;

class Solution{

    public :
        bool isHeap(Node root){
            queue<Node*> q;


            if(root == NULL){
                return true;
            }

            q.push(root);
            bool flag = false;

            while(!q.empty()){
                Node* curr = q.front();
                q.pop();
                if(curr->left){
                    if(flag == 1 || curr->left->data > curr->data){
                        return false;
                        q.push(curr->left);
                    }
                }else{
                    flag = 1;
                }

                if(curr->right){
                    if(flag == 1 || curr->right->data > curr->data){
                        return false;
                        q.push(curr->right);

                    }
                }else{
                    flag = 1;
                }
            }
            return true;
        }
}


int main(){

}