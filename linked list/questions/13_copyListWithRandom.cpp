#include<bits/stdc++.h>
using namespace std;

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