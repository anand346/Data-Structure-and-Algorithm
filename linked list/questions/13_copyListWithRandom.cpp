#include<bits/stdc++.h>
using namespace std;


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

// https://www.youtube.com/watch?v=ctFmFbeyTVU

class Solution{

    public : 
        Node* copyRandomList(Node* head) {
            map<Node*,Node*> mp;
            Node *original = head;

            while(original){
                Node* copy = new Node(original->val);
                mp[original] = copy;
                original = original->next;
            }

            original = head;
            while(original){
                mp[original]->next = mp[original->next];
                mp[original]->random = mp[original->random];
                original = original->next;
            }
            return mp[head];
    }
}


int main(){

}