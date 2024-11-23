// https://leetcode.com/problems/maximum-width-of-binary-tree/
// ayushi sharma

class Solution {
public:

    int widthOfBinaryTree(TreeNode* root) {

       queue<pair<TreeNode*,long long>> q;
       q.push({root,0});
       int ans = 0;

       while(!q.empty()){
           int n = q.size();
           int start = q.front().second;
           int end = q.back().second;

           ans = max(ans,(end-start)+1);

           for(int i = 0;i < n;i++){
               pair<TreeNode*,int> p = q.front();
               TreeNode* curr = p.first;
               long long idx = p.second;

               q.pop();

               if(curr->left){
                   q.push({curr->left,(idx*2)+1});
               }
               if(curr->right){
                   q.push({curr->right,(idx*2)+2});
               }
           }
       }

       return ans;


    }
};