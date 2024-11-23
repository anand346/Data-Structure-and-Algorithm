#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> ans;
        queue<Node*> q;
        if(!root) return ans;

        q.push(root);
        int f = 1;
        while(!q.empty()){

            vector<int> temp;
            int sz = q.size();
            while(sz--){
                Node* t = q.front();
                temp.push_back(t->data);
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }

            if(f%2 == 0) reverse(temp.begin(),temp.end());
            for(int i = 0;i < temp.size();i++) ans.push_back(temp[i]);
            f = !f;
        }
        return ans;
    }
};


// updated


vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        int f= 1;

        while(!q.empty()){

            vector<int> temp;
            int size = q.size();
            while(size--){
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);

                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }

            if(f%2 == 0){
                reverse(temp.begin(),temp.end());
            }
            ans.push_back(temp);
            f = !f;
        }
        return ans;
    }