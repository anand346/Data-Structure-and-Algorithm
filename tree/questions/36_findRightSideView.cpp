// https://leetcode.com/problems/binary-tree-right-side-view/solutions/3460547/binary-tree-right-side-view-c-lvl-order-traversal-100-00-faster/


class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return {};
        queue<pair<TreeNode*,int>> q;
        int currlvl = -1;
        q.push({root,0});
        vector<int> ans;
        while(!q.empty()){

            auto ele = q.front();
            q.pop();
            root = ele.first;
            int lvl = ele.second;

            if(currlvl < lvl){
                ans.push_back(root->val);
                currlvl = lvl;
            }

            if(root->right != nullptr) q.push({root->right,lvl+1});
            if(root->left != nullptr) q.push({root->left,lvl+1});
            
        }
        return ans;
    }
};