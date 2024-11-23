// https://practice.geeksforgeeks.org/problems/single-valued-subtree/1
//gfg solution
class Solution
{
    public:
    bool f(Node* root,int &ans)
    {
        if(!root) return true;
        bool l=f(root->left,ans);
        bool r=f(root->right,ans);
        if(l&&r)
        {
            int od,ld,rd;
            od=ld=rd=root->data;
            if(root->left) ld=root->left->data;
            if(root->right) rd=root->right->data;
            if(od==ld && od==rd) 
            {
                ans+=1;
                return true;
            }
            else return false;
        }
        return false;
    }
    int singlevalued(Node *root)
    {
        //code here
        int ans=0;
        f(root,ans);
        return ans;
    }
    
};