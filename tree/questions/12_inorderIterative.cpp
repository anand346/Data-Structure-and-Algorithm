// https://www.youtube.com/watch?v=5y_j0OqD7v8
// https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/1

class Solution{

    public :
        void inOrder(Node* root){
            stack<Node*> s;
            Node* curr = root;

            while(curr != NULL and s.empty() == false){

                while(curr != NULL){
                    s.push(curr);
                    curr = curr->left;
                }

                curr = s.top();
                s.pop();

                cout<<curr->data<<" ";
                curr = curr->right;
            }
        }
        vector<int> inOrder(Node* root)
        {
            //code here
            stack<Node*> st;
            vector<int> inorder;
            st.push(root);
            while(!st.empty()){
                Node* curr=st.top(); st.pop();
                if((curr->left || curr->right )){
                    if(curr->right) st.push(curr->right);
                    st.push(curr);
                    if(curr->left) st.push(curr->left);
                    curr->left=NULL;
                    curr->right=NULL;
                }
                else{ inorder.push_back(curr->data);}
            }
            return inorder;
        }
}