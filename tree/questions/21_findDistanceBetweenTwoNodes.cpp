// https://www.youtube.com/watch?v=6DraIPN_0no
// https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1

#include<bits/stdc++.h>
using namespace std;



Node* lca(Node* root,int n1,int n2){

    if(!root) return NULL ;
    if(root->data == n1 or root->data == n2) return root;

    Node* l = lca(root->left,n1,n2);
    Node* r = lca(root->right,n1,n2);

    if(l and r) return root;
    if(l) return l;
    else return r;
}


int solve(Node* root,int val){
    if(!root ) return 0;
    if(root->data == val) retturn 1;
    int a = solve(root->left,val);
    int b = solve(root->right,val);

    if(!a and !b) return 0;
    else return a+b+1;
}

int findDist(Node* root,int a ,int b){
    Node* LCA = lca(root,a,b);
    int x= solve(LCA,a);
    int y = solve(LCA,b);
    return x+y-2;
}