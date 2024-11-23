// https://www.youtube.com/watch?v=K2ybI-GEHSY
// https://practice.geeksforgeeks.org/problems/preorder-traversal-iterative/1
class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        //code here
        stack<Node *> pre;
        vector<int> preorder;
        //Node *temp;
            pre.push(root);
            while(!pre.empty())
            {
                Node *temp=pre.top();
                preorder.push_back(temp->data);
                pre.pop();
                
                if(temp->right)
                    pre.push(temp->right);
                if(temp->left)
                    pre.push(temp->left);
            }
        
        return preorder;    
    }
};