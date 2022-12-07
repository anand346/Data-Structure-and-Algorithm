// https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :
        Node* connect(Node* root){
            if(!root) return NULL;
            queue<Node*> q;
            q.push(root);

            while(!q.empty()){
                int l = q.size();
                for(int i = 0;i < l;i++){
                    Node *f = q.front();
                    q.pop();
                    if(i == l-1) f->next = NULL;
                    else{f->next = q.front()};
                    if(f->left) q.push(f->left);
                    if(f->right) q.push(f->right)
                }
                
            }

            return root;

        }
}


int main(){


}