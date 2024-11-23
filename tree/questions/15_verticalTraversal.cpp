//video by techdose
//https://gist.github.com/SuryaPratapK/d73b9a97c2c8a2af762af106b794ad2d

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 //BFS-Method
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        TreeNode *curr;
        queue<pair<TreeNode*, int>> q;
        q.push({root,0});
        vector<vector<int>> ans;
        map<int,vector<int>> mymap;
        
        //BFS
        while(!q.empty())
        {
            int size = q.size();            
            map<int,set<int>> mapset;
            
            while(size--)
            {
                curr = q.front().first;
                int col = q.front().second;
                q.pop();
                mapset[col].insert(curr->val);
                
                if(curr->left)
                    q.push({curr->left,col-1});
                if(curr->right)
                    q.push({curr->right,col+1});
            }
            for(auto it: mapset)
                for(auto it2: it.second)
                    mymap[it.first].push_back(it2);
        }
        //Now pass all values from mymap to ans array
        for(auto it: mymap)
            ans.push_back(it.second);
        
        return ans;
    }
};


//BFS Method updated
https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/solutions/3358726/c-with-explanation-and-comments/
class Solution {
public:

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> todo;
        todo.push({root, {0, 0}});
        while(!todo.empty())
        {
            auto p = todo.front();
            todo.pop();         
            TreeNode* node=p.first;     // take the node
            int x = p.second.first;        // take the vertical order
            int y = p.second.second;    // take the level

            nodes[x][y].insert(node->val);      // insert that into your DS, multiset

            if(node->left)        // after that you insert it into the queue, vertical-1, lvl+1
            {
                todo.push({node->left, {x-1, y+1}});
            }
            if(node->right)     // if there is a right, insert into
            {
                todo.push({node->right, {x+1, y+1}});       // vertical+1, level+1
            }
        }
        vector<vector<int>> ans;

        for(auto p : nodes)     // traverse through the map
        {
            vector<int> col;
            // p.second -> map<int, multiset<int>>
            for(auto q : p.second)
            {
                // for every element you are inserting right, at the end
                // the entire multiset
                // lets say for a vertical 0, we had the levels 0, 1 and 2
                // so first we traversed for 0, got a multiset, inserted it into the map
                // then we traversed for 1, got a multiset, inserted it into the the map
                // then for 2, got another multiset, inserted it inot the map 
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            // once we get the entire vertical, we insert it into the ans
            ans.push_back(col);
        }
            
        
        return ans;
    }
};

//DFS Method
class Solution {
    map<int,map<int,set<int>>> mymap;
    void solve(TreeNode *curr,int col,int row)
    {
        if(!curr)
            return;
        
        mymap[col][row].insert(curr->val);
        solve(curr->left,col-1,row+1);
        solve(curr->right,col+1,row+1);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root,0,0);
        
        vector<vector<int>> ans;
        for(auto m1: mymap)
        {    
            ans.push_back(vector<int>());
            for(auto m2: m1.second)
            {
                for(auto m3: m2.second)
                    ans.back().push_back(m3);
            }
        }
        return ans;
    }
};