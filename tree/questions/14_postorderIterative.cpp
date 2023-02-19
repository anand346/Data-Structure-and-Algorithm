// https://www.youtube.com/watch?v=k21VKEM8OFY
// https://practice.geeksforgeeks.org/problems/postorder-traversal-iterative/1


class Solution{
    public:
    vector<int> postOrder(Node* node) {
        // code here
        vector<int> res;
        stack<Node*> s1;
        stack<Node*> s2;
        s1.push(node);
        
        // Here normal bfs is applied but the current node is pushed into another stack
        while(!s1.empty()){
            Node* curr = s1.top();
            s1.pop();
            s2.push(curr);
            if(curr->left) s1.push(curr->left);
            if(curr->right) s1.push(curr->right);
        }
        
        // the elements from the second stack is stored in the resultant vector
        while(!s2.empty()){
            res.push_back(s2.top()->data);
            s2.pop();
        }
        return res;
    }
};