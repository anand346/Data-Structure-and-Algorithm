// https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/

#include<bits/stdc++.h>
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

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