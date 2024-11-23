// https://www.youtube.com/watch?v=Nso0JXUgLHw
// https://www.geeksforgeeks.org/check-if-all-levels-of-two-trees-are-anagrams-or-not/

#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :
        bool areAnagrams(Node* r1,Node* r2){
            queue<Node*> q1,q2;
            
            q1.push(r1);
            q2.push(r2);


            while(q1.size() and q2.size()){
                map<int,int> mp;
                int s= q1.size();
                for(int i= 0;i < s;i++){
                    auto curr = q1.front();
                    q1.pop();
                    mp[curr->data]++;
                    if(curr->left) q1.push(curr->left);
                    if(curr->right) q1.push(curr->right);
                }
                s= q2.size();
                for(int i= 0;i < s;i++){
                    auto curr = q2.front();
                    q2.pop();
                    mp[curr->data]--;
                    if(curr->left) q2.push(curr->left);
                    if(curr->right) q2.push(curr->right);
                }

                for(auto i : mp){
                    if(i.second != 0) return 0;
                }
            }

            return q1.size() == 0 and q2.size() == 0;
        }
}