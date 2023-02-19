// https://practice.geeksforgeeks.org/problems/check-if-subtree/
// https://www.youtube.com/watch?v=npetHinL22Q&t=101s

bool areIdentical(Node* root1,Node* root2){
        if(root1 == NULL and root2 == NULL) return true;
        
        if(root1 == NULL || root2 == NULL) return false;
        
        return (root1->data == root2->data &&
            areIdentical(root1->left,root2->left) &&
            areIdentical(root1->right,root2->right)
        );
    }
  
    //Function to check if S is a subtree of tree T.
    bool isSubTree(Node* T, Node* S) 
    {
        // Your code here
        if(T == NULL) return false;
        if(S == NULL) return false;
        
        if(areIdentical(T,S)){
            return true;
        }
        
        return isSubTree(T->left,S) || isSubTree(T->right,S);
        
    }